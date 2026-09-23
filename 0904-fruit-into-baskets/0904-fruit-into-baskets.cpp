class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        map<int,int>mp;
        int n=fruits.size();
        int start=0;

        for(int end=0;end<n;end++){
            mp[fruits[end]]++;
            while(mp.size()>2){
                if(mp[fruits[start]]==1){
                    mp.erase(fruits[start]);
                }
                else{
                    mp[fruits[start]]--;
                }
               
            
             start++;
            }
            
        
        ans=max(ans,end-start+1);
        }
        return ans;
    }
};