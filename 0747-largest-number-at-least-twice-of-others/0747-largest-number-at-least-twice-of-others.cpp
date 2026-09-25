class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0];
        int smax = -1;
        int index = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > max) {
                smax = max;
                max = nums[i];
                index = i;
            }
            else if(nums[i] > smax) {
                smax = nums[i];
            }
        }

        if(smax * 2 <= max) {
            return index;
        }
        else {
            return -1;
        }
    }
};