class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int sum=0;
        int dig;
        
        while(temp>0){
            dig=temp%10;
            sum=sum*10+dig;
            temp=temp/10;
        }
        return abs(n-sum);

        
    }
};