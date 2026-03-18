class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int i,j,n,count;
        n=arr.size();
        vector<int> a;
        unordered_map<int, int> mp;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(mp[i]>1)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};