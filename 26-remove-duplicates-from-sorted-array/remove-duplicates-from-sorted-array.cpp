class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,n,count=0;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                count++;
            }
            if(i>0 && nums[i]!=nums[count-1])
            {
                nums[count]=nums[i];
                count++;
            }
        }
        return (count);
    }
};