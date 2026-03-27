class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int i=0,n=arr.size();
        while(1)
        {
            if(n==1)
            {
                break;
            }
            if(arr[i]>arr[i+1])
            {
                return 0;
            }
            i++;
            if(i==n-1)
            {
                break;
            }
        }
        return 1;
    }
};