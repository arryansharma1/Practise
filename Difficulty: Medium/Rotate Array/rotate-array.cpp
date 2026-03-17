class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int i,n=arr.size(),k=0,j,x=0;
        k=d%n;
        int b[k];
        for(i=0;i<k;i++)
        {
            b[i]=arr[i];
        }
        for(i=0;i<(n-k);i++)
        {
            arr[i]=arr[i+k];
        }
        for(j=i;j<n;j++)
        {
            arr[j]=b[x];
            x++;
        }
    }
};