#include<bits/stdc++.h>
using namespace std;

//C++ Solution
// Time Complexity - O(N)

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        int l1 = left.size() ,  l2 = right.size();
        for(int i=0;i<l1;i++){
            ans = max(ans , left[i]);
        }
        for(int i=0;i<l2;i++){
            ans = max(ans , n-right[i]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}