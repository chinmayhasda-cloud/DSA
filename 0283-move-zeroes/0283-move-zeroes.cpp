class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> cpy(n);
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                cpy[count] = nums[i];
                count++;
            }
        }
        
        while(count < n){
            cpy[count] = 0;
            count++;
        }
        
        nums = cpy;
    }
};