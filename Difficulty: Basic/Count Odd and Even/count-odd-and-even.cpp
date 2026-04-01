class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int i,count1=0,count2=0,n;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                count2++;
            }
            else
            {
                count1++;
            }
        }
        return pair(count1,count2);
    }
};