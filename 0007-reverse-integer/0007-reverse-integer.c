int reverse(long x){
long rev ;
long sum=0;

long  temp;
signed   digit;
temp=x;
 if(x<= 0 ){
  x = -1 *x;
  
 }
 while(x>0){
    digit=x%10;
    sum=sum*10+digit;
    x=x/10;

 }
 if(temp< 0){
    sum=sum*-1;
 }
 if( sum > 2147483647 || sum < -1*2147483648){
    return 0;
 }
 else{
    
 return sum;
 }

 

}