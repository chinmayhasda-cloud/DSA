class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int count=0;
        vector<int> expect=heights;

       // for(int i=0;i<n;i++){
         //   expect[i]=heights[i];
        //}
        sort(expect.begin(),expect.end());

        for(int i=0;i<n;i++){
            if(  expect[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};