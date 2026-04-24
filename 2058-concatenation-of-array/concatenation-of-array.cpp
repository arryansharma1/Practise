class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,n,count=0;
        n=nums.size();
        vector<int> ans;
        for(i=0;i<(2*n);i++)
        {
            if(i==n)
            {
                count=0;
            }
            ans.push_back(nums[count]);
            count++;
        }
        return ans;
    }
};