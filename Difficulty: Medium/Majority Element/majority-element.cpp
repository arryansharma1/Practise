class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int i,j,count=0,n;
        unordered_map<int,int> mp;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]>(n/2))
            {
                return arr[i];
            }
        }
        return -1;
    }
};