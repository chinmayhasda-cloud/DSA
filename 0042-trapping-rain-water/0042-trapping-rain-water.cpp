class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int result = 0;
        

       int  lmax=0;
         int rmax=0;

        while(l<r)  {
            if(height[l]<height[r]){
                lmax=max(lmax,height[l]);
                result +=lmax-height[l];
                l++;
            }

                else{
                   rmax=max(rmax,height[r]);
                   result += rmax - height[r];
                   r--;

                } 
        }
        return result;
            }
};