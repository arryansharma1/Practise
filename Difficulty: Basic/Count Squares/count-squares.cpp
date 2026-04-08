class Solution {
  public:
    int countSquares(int n) {
        // code here
        int i,count=0;
        for(i=1;i<=(n/2);i++)
        {
            if(i*i < n)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};