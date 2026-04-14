class Solution {
  public:
    int factorial(int n) {
        // code here
        int i,fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
};
