class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i,n,count=0;
        n=nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                ans.push_back(nums[i]);
                count++;
            }
            if(count==2)
            {
                break;
            }
        }
        return ans;
    }
};