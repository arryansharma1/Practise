class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,count=0,n;
        n=nums.size();
        unordered_map<int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                count=nums[i];
            }
        }
        return count;
    }
};