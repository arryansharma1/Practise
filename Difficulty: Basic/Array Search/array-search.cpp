class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int i,n,index=0,count=0;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                index=i;
                count++;
                break;
            }
        }
        if(count==0)
        {
            index=-1;
            return index;
        }
        else
        {
            return index;
        }
    }
};