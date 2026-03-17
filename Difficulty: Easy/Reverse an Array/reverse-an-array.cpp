class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n,i;
        n=arr.size();
        int temp=0;
        for(i=0;i<n;i++)
        {
            if(i!=(n/2) && i<=(n/2))
            {
                temp=arr[i];
                arr[i]=arr[n-1-i];
                arr[n-1-i]=temp;
            }
        }
    }
};