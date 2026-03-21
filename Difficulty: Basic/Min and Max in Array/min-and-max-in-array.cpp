class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int i,max=arr[0],min=arr[0],n;
        n=arr.size();
        vector<int> ans;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
            else
            {
                if(arr[i+1]>max)
                {
                    max=arr[i+1];
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i+1]<min)
                {
                    min=arr[i+1];
                }
            }
            else
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
        }
        ans.push_back(min);
        ans.push_back(max);
        return ans;
    }
};