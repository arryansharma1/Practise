class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i,n,temp=0,count=0;
        n=arr.size();
        int ans[n];
        temp=n-1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
               ans[temp]=0;
               temp--;
            }
            else
            {
                ans[count]=arr[i];
                count++;
            }
        }
        for(i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
    }
};