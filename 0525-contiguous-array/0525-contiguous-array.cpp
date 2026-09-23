class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) if(nums[i] == 0) nums[i] = -1;
        map <int,int> mp;
        int curr = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            curr += nums[i];
            if(curr == 0) ans = i+1;
            if(mp.count(curr) != 0) ans = max(ans , i - mp[curr]);
            if(mp.count(curr) == 0) mp[curr] = i;
        }
        return ans;
    }
};