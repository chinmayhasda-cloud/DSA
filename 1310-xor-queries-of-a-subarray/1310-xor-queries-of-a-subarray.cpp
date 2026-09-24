class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int m=queries.size();
        vector<int>prefix(n+1,0),ans;
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]^arr[i];
        }
        for(int i=0;i<m;i++){
            int l=queries[i][0] , r=queries[i][1];
            l++;
            r++;
            ans.push_back(prefix[r]^prefix[l-1]);
        }
    return ans;
    }
};