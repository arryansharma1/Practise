class Solution {
public:
    int addDigits(int num) {
        long long int ans=0,x=0,temp=0;
        if(num<10)
        {
            return num;
        }
        if(num==10)
        {
            return 1;
        }
        x=num;
        while(num>10)
        {
            temp=num;
            x=0;
            while(temp>0)
            {
                x=x+temp%10;
                temp=temp/10;
            }
            num=x;
            if(num<10)
            {
                ans=num;
            }
            else if(num==10)
            {
                ans=1;
            }
        }
        return ans;
    }
};