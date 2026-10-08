class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return 1==1;
        long long int  i=1;
        while(i<num){
            if(i*i==num){
                return true;
            }
            i+=1;
        }
        return false;
    }
};