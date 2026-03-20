// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        int i,j,count=0;
        vector<int> ans;

        for(i=M;i<=N;i++)
        {
            count=0;
            if(i==1)
            {
                count=1;
            }
            if(i==2)
            {
                count=0;
            }
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};