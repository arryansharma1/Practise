class Solution {
public:
    bool isPowerOfThree(int n) {
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
            if(n%3!=0)
            {
                count++;
                break;
            }
            n=n/3;
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