class Solution {
public:
    int mySqrt(int x) {
     long long i=1;
        while((i*i)<= x){
            i=i+1;
        }
        return i-1;
        
    }
};