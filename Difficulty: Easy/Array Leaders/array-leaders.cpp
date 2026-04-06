

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int i,j,n,max=0,count=0,temp=0;
        n=arr.size();
        vector<int> ans;
        max=arr[n-1];
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
                ans.push_back(arr[i]);
            }
        }
        i=0;
        j=ans.size();
        while(i<j)
        {
            temp=ans[i];
            ans[i]=ans[j-1];
            ans[j-1]=temp;
            i++;
            j--;
        }
        return ans;
    }
};