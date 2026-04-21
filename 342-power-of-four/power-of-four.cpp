class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int i=1,count=0;
        if(n==1)
        {
            return 1;
        }
        while(n>=i && n>0)
        {
            i=i*4;
            if(i==n)
            {
                count++;
                break;
            }
        }
        return count;
    }
};