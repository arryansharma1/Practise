class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        int i,j,count=0,n;
        n=arr.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
