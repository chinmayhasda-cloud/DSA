class Solution {
public:
    vector<bool>vis;
    int helper(int i,int n){
        if(i>n) return 1;
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(!vis[j] && (j%i==0 ||i%j==0)){
                vis[j]=true;
                cnt+=helper(i+1,n);
                vis[j]=false;
            }
        }
        return cnt;
        
    }

    int countArrangement(int n) {
       int ans=0;
        vis.resize(n+1,false);
        ans+=helper(1,n);
        return ans;
    }
};