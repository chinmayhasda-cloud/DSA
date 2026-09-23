class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int , int >mp;
        int n=s.size();
        int ans=0;
        int start=0;
        int end=0;
        int maxfreq=0;
        


        for(end=0;end<n;end++){
            mp[s[end]]++;
            maxfreq=max(maxfreq,mp[s[end]]);
        
        while(((end-start+1)- maxfreq )>k){
            mp[s[start]]--;;
            start++;
        }
        ans=max(ans,(end-start+1));

    }
      return ans;
    }
};