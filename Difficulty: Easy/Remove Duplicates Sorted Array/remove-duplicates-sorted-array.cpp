class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        unordered_map<int,int> mp;
        int i,n;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==1)
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};