class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%4==0)
        {
            if(n%400==0)
            {
                return 1;
            }
            else if(n%100!=0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
};