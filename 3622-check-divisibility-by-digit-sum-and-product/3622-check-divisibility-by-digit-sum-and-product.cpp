class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int pro=1;
        int dig;
        int lsum;
        while(temp>0){
          dig = temp%10;
          sum += dig;
          pro *= dig;
          temp=temp/10;

        }
         lsum=sum+pro;

        if(n%lsum==0){
            return true;
        }
        return false;
    }
};