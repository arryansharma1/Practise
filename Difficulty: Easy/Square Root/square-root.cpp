class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int i,count=0;
        if(n==1)
        {
            return 1;
        }
        for(i=2;i<=(n/2);i++)
        {
            if(i*i<=n)
            {            
                if((i*i)==n)
                {
                     count++;
                     return i;
                }
                
            }
            else
            {
                return i-1;
            }
        }
        
    }
};