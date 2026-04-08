class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int i=0,p=0,n=0,x=0;
        while(b[i]!='\0')
        {
            n++;
            i++;
        }
        for(i=n-1;i>=0;i--)
        {
            if(b[i]=='1')
            {
                x=x+power(p);
            }
            p++;
        }
        return x;
    }
    int power(int n)
    {
        int i,ans=1;
        for(i=1;i<=n;i++)
        {
            ans=ans*2;
        }
        return ans;
    }
};