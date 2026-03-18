class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        int i,n;
        n=arr.size();
        vector<int> ans;
        unordered_map<int, int> m;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>0)
            {
                ans.push_back(arr[i]);
                m[arr[i]]=0;
            }
        }
        return ans;
    }
};