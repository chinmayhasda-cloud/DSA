class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0;
        int j = 1;

        for(int k = 0; k < nums.size(); k++)
        {
            if(nums[k] >= 0) {
                res[i] = nums[k];
                i = i + 2;
            }

            if(nums[k] < 0) {
                res[j] = nums[k];
                j = j + 2;
            }
        }

        return res;
    }
};