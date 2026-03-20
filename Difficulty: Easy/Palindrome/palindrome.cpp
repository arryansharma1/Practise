class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int i=n,x=0;
        while(n>0)
        {
            x=10*x+(n%10);
            n=n/10;
        }
        if(i==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};