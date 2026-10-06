class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>freq(nums.size()+1);
       
        int count=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(freq[i]==0) c++;
        }
         vector<int>ans(c);
        for(int i=1;i<nums.size()+1;i++){
            if(freq[i]==0){
                ans[count]=i;
                count++;
            }
        }
        return ans;
    }
};