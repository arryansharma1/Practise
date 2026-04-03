class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int x=0,a;
        if(n<0)
        {
            n=n*-1;
        }
        a=n;
        while(a>0)
        {
            x=x*10+a%10;
            a=a/10;
        }
        if(x==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};