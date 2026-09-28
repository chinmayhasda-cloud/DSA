class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>cpy=nums;
        sort(nums.begin(),nums.end());
       int  max=nums[nums.size()-1];

       for(int i=0;i<cpy.size();i++){
        if(cpy[i]==max){
            return i;
        }
       }
       return 0;
    }
};