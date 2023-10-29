//Problem Link : https://leetcode.com/problems/maximum-score-of-a-good-subarray/description/
//Youtube : https://youtu.be/DggX1GeibNA

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int score = 0;

        vector<int> nsr(n); //next smaller element to the right
        vector<int> nsl(n); //next smaller element to the left

        //computing nsl
        stack<int> st1;
        for(int i = 0; i < n; i++){
            while(!st1.empty() && nums[st1.top()] >= nums[i]){
                st1.pop();
            }

            nsl[i] = st1.empty() ? -1 : st1.top();
            
            st1.push(i);
        }

        //computing nsr
        stack<int> st2;
        for(int i = n - 1; i >= 0; i--){
            while(!st2.empty() && nums[st2.top()] >= nums[i]){
                st2.pop();
            }

            nsr[i] = st2.empty() ? n : st2.top();


            st2.push(i);
        }


        for(int i = 0; i < n; i++){
            if(nsl[i] < k && nsr[i] > k){
                score = max(score, nums[i] * (nsr[i] - nsl[i] - 1));
            }
        }


        return score;
    }
};


int main(){
    
    return 0;
}