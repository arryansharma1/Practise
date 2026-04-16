class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,n,count=0;
        n=nums.size();
        unordered_map<int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==2)
            {
                count=nums[i];
                break;
            }
        }
        return count;
    }
};