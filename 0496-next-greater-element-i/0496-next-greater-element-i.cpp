
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr(nums1.size(), -1);
        int i=0;

        while(i<nums1.size()) {
            int j=0;

            while(j<nums2.size()&&nums2[j]!=nums1[i]) {
                j++;
            }
            for(int k=j+1;k<nums2.size();k++) {
                if(nums2[k]>nums1[i]) {
                    arr[i]=nums2[k];
                    break;
                }
            }
        i++;
        }
       return arr;
    }
};
