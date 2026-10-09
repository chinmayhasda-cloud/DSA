
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = nums[0];
        int smax = nums[1];

        if (smax > max) {
            int temp = max;
            max = smax;
            smax = temp;
        }

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] > max) {
                smax = max;
                max = nums[i];
            }
            else if (nums[i] > smax) {
                smax = nums[i];
            }
        }

        return (max - 1) * (smax - 1);
    }
};