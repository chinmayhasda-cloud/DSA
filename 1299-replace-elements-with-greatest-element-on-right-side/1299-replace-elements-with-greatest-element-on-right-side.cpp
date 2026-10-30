class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans(arr.size());
       // int max=-1;
        ans[arr.size()-1]=-1;
        for(int i=0;i<arr.size()-1;i++){
           //max=-1;
           ans[i]=*max_element(arr.begin()+i+1,arr.end());
        }
          return ans;
    }
};