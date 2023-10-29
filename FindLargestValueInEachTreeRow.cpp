//Youtube Video Link : https://youtu.be/uVXlUVu2Jnw


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        //EDGE CASE
        if(root == NULL){
            return {}; //empty array
        }
        
        vector<int> ans;
        
        //Level Order Traversal
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            int maxi = INT_MIN;
            while(s--){
                auto node = q.front();
                q.pop();
            
                maxi = max(maxi, node->val);
                
                if(node->left != NULL){
                    q.push(node->left);
                }

                if(node->right != NULL){
                    q.push(node->right);
                }
            }

            ans.push_back(maxi);
        }

        return ans;
    }
};

int main(){
    
    return 0;
}