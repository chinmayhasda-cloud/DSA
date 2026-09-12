bool isPalindrome(int x) {
    long digit;
    long n;
    long temp;
    temp=x;
    n=0;
    while(x>0){
     digit=x%10;
     n=n*10+digit;
     x=x/10;

    }
    if(n==temp){
        return true;
    }
    else{
        return false;
    }
}