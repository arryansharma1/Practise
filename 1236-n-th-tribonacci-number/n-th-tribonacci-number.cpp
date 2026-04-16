class Solution {
public:
    int tribonacci(int n) {
        int i,a=0,b=1,c=1,temp=0,count=0;
        if(n==0)
        {
            count=a;
            return count;
        }
        else if(n==1)
        {
            count=b;
            return count;
        }        
        else if(n==2)
        {
            count=c;
            return count;
        }
        for(i=3;i<=n;i++)
        {
            temp=c;
            c=a+b+c;
            a=b;
            b=temp;
        }
        return c;
    }
};