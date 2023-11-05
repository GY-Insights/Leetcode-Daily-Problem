class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mp;
        int maxi = arr[0];
        for(int i=1;i<n;i++){
             maxi = max(maxi , arr[i]);
             mp[maxi]++;
             if(mp[maxi]>=k) return maxi;
        }

        return maxi;
    }
};
