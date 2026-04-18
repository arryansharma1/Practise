class Solution {
public:
    int mirrorDistance(int n) {
        int x=0,temp=n,count=0;
        while(temp>0)
        {
            x=x*10+temp%10;
            temp=temp/10;
        }
        if(x>n)
        {
            count=x-n;
        }
        else
        {
            count=n-x;
        }
        return count;
    }
};