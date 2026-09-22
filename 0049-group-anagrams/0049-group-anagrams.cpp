class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string y=strs[i];

            sort(y.begin(),y.end());
            mp[y].push_back(strs[i]);
        }
      vector<vector<string>>ans;

      for(auto z:mp){
        vector<string> val=z.second;
        ans.push_back(val);
      }
      return ans;
    }
};