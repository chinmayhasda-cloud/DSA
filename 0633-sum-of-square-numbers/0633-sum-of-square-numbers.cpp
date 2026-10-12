class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,h=sqrt(c);
        while(l<=h){
            long long cur=(l*l)+(h*h);
            
            if(cur==c) return true;
            else if(cur>c){
                h--;
            }
            else l++;
        }
        return false;
    }
};