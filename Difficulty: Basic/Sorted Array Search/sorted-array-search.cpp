class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int i,n,count=0;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                count++;
                break;
            }
        }
        if(count>0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};