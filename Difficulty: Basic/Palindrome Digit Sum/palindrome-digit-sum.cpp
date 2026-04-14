// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int x=0;
        while(n>0)
        {
            x=x+n%10;
            n=n/10;
        }
        int a=0,temp=x;
        while(temp>0)
        {
            a=a*10+temp%10;
            temp=temp/10;
        }
        if(x==a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};