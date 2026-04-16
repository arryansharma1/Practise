class Solution {
public:
    int fib(int n) {
        int i,a=0,b=1,temp,count=0;
        if(n==0)
        {
            count=a;
            return count;
        }
        if(n==1)
        {
            count=b;
            return count;
        }
        for(i=2;i<=n;i++)
        {
            temp=a;
            a=b;
            b=b+temp;
        }
        return b;
    }
};