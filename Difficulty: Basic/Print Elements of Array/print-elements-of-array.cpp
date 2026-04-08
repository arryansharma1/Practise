// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        int n,i;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
};