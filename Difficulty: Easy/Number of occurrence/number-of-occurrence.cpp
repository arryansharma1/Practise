class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int i,count=0,n;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            if(arr[i]==target)
            {
                count++;
            }
        }
        return count;
    }
};
