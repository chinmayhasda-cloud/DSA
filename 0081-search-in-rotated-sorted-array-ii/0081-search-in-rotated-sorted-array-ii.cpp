class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        auto ans = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        return ans < nums.size() && nums[ans] == target;
    }
};