class Solution {
public:
    int reverse(int x) {
        long long int n=0,count=0;
        while(x!=0)
        {
            n=n*10+x%10;
            x=x/10;

            if (n > INT_MAX || n < INT_MIN) 
            {
                return 0;
            }
        }
        if(count==1)
        {
            n=n*-1;
        }
        return n;
    }
};