class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>prefix(nums.size()+1);
        int valid=-1;
        for(int i=1;i<=nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }

        for(int i=1;i<=nums.size();i++){
            if(prefix[i-1]==(prefix[nums.size()]-prefix[i])){
                valid=i-1;
                break;
            }
        }
        return valid;
    }
};