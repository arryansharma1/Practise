class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        int i,count,check=0;
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        else if(n>2)
        {
            while(n!=1)
            {
                check=n/2;
                if(n==1)
                {
                    return 1;
                }
                if(2*check==n)
                {
                    n=n/2;
                    continue;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
};