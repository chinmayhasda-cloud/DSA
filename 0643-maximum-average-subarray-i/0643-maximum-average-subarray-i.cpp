class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double n=nums.size();
        double sum;
        double ans=INT_MIN;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];

        }
        
        ans=max(ans,sum);
        
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            
            ans=max(ans,sum);
        }
        
        return ans/k;
    }
};