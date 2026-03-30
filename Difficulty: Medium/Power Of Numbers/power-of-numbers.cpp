class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        int i,x=0,y=n,z=n;
        if(n>=10)
        {        
            while(z>0)
            {
                x=x*10+z%10;
                z=z/10;
            }
            z=n;
            for(i=1;i<=x;i++)
            {
                if(x>=2)
                {
                    z=z*n;
                }
                else
                {
                    z=n*1;
                }
            }
            return z;
        }
        for(i=2;i<=n;i++)
        {
            y=y*n;
        }
        return y;
    }
};