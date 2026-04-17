class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int i,count=0;
        if(n==0)
        {
            count=1;
        }
        if(n<0)
        {
            count=1;
        }
        while(n>0)
        {
            if(n==1)
            {
                count=0;
                break;
            }
            if(n%2!=0)
            {
                count++;
                break;
            }
            n=n/2;
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