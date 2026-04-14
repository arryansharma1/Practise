// User function Template for C++

class Solution {
  public:
    long long nPr(int n, int r) {
        // code here
        long long int i,ans=1;
        for(i=(n-r+1);i<=n;i++)
        {
            ans=ans*i;
        }
        return ans;
    }
};