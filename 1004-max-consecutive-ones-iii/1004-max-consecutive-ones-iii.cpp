class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s=0,right=0;
        int count=0;
        int ans=0;
        for( right=0;right<nums.size();right++){
            if(nums[right]==0){
                count++;
            }
            while(count > k){
                if(nums[s]==0) {
                    count--;
                    
                }
                s++;
            }
            
            ans=max(ans,(right+1-s));
            

        }
        return ans;
    }
};