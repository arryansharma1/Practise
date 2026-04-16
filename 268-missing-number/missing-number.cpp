class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,n,count=0;
        n=nums.size();
        unordered_map<int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<=n;i++)
        {
            if(mp[i]!=1)
            {
                count=i;
            }
        }
        return count;
    }
};