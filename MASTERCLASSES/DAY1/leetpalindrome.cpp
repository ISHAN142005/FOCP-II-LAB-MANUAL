class Solution {
public:
    bool isPalindrome(int x){
    if(x<0) {return false;}

    int real=x;
    int reverse=0;
    int rem;

    while(x!=0){
        rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
    }
        return reverse==real;
    }
};