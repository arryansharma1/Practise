class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i,j,n;
      n=nums.size();
      vector<int> ans;
      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
            if(target==(nums[i]+nums[j]))
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
      }
      return ans;  
    }
};