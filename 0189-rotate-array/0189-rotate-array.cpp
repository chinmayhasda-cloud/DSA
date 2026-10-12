class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());

        int n = nums.size();
        k = k % n;

        for(int i = 0; i < n-k; i++) {
            ans[i+k] = nums[i];
        }

        for(int i = 0; i < k; i++) {
            ans[i] = nums[n-k+i];
        }

        nums = ans;
    }
};