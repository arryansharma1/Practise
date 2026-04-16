class Solution {
public:
    int mySqrt(int x) {
        long long int i,count=0;
        if(x==1)
        {
            count=1;
            return count;
        }
        for(i=1;i<=(x/2);i++)
        {
            if((i*i)<=x)
            {
                count=i;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};