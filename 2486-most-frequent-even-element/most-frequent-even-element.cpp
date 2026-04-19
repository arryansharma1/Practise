class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int x=0,i,count=0,n,max=-1,ans=nums[0],flag=0,min=0;
        n=nums.size();
        unordered_map<int,int> mp;;
        for(i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
                flag++;
            }
        }
        if(flag==0)
        {
            return max;
        }
        count=mp[nums[0]];
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]>count && nums[i]%2==0)
            {
                count=mp[nums[i]];
                ans=nums[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(mp[ans]==mp[nums[i]] && nums[i]!=ans)
            {
                if(ans>nums[i])
                {
                    ans=nums[i];
                }
            }
        }
        return ans;

    }
};