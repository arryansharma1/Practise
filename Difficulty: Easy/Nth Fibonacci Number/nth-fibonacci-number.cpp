class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int i,a,b,temp;
        a=0;
        b=1;
        if(n==0)
        {
            return a;
        }
        for(i=1;i<n;i++)
        {
            if(n==1)
            {
                return b;
            }
            else
            {
                temp=b;
                b=a+b;
                a=temp;
            }
        }
        return b;
    }
};