class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        
        vector<int> arr = nums;

        
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = n - 1;

        int first = -1;
        int second = -1;

        
        while (l < r) {

            int sum = nums[l] + nums[r];

            if (sum == target) {
                first = nums[l];
                second = nums[r];
                break;
            }
            else if (sum > target) {
                r--;
            }
            else {
                l++;
            }
        }

        
        int index1 = -1;
        int index2 = -1;

        for (int i = 0; i < n; i++) {

            if (arr[i] == first && index1 == -1) {
                index1 = i;
            }
            else if (arr[i] == second && index2 == -1) {
                index2 = i;
            }
        }

        return {index1, index2};
    }
};