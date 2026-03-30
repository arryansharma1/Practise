// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        int i,x=0,y=1,fib=0;
        vector<int> ans;
        if(n==1)
        {
                ans.push_back(x);
            
        }
        if(n>=2)
        {
            ans.push_back(x);
            ans.push_back(y);
        }
        for(i=3;i<=n;i++)
        {
            fib=x+y;
            x=y;
            y=fib;
            ans.push_back(fib);
        }
        return ans;
    }
};