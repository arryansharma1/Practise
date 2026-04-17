class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i,count=0;
        if(num==1)
        {
            count=1;
        }
        for(i=2;i<=(num/2);i++)
        {
            if((i*i)==num)
            {
                count++;
            }
        }
        return count;
    }
};