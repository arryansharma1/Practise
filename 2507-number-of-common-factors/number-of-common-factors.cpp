class Solution {
public:
    int commonFactors(int a, int b) {
        int i,count=0,n;
        if(a>b)
        {
            n=a;
        }
        else
        {
            n=b;
        }
        if(a==b)
        {
            count++;
        }
        for(i=1;i<=(n/2);i++)
        {
            if(a%i==0 && b%i==0)
            {
                count++;
            }
        }
        return count;
    }
};