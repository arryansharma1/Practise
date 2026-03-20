class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int i,count=0;
        if(n==1)
        {
            count++;
        }
        for(i=2;((i*i)<=n);i++)
        {
            if(n==2)
            {
                count++;
                break;
            }
            else
            {
                if(n%i==0)
                {
                    count++;
                    break;
                }
                else
                {
                    count=0;
                }
            }
        }
        if(count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
