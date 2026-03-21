class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i,n,count1=0,count2=0,count3=0,index=0,index1=0;
        n=arr.size();
        vector<int> ans;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count1++;
            }
            else if(arr[i]==1)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
        for(i=0;i<count1;i++)
        {
            arr[i]=0;
            index++;
        }
        for(i=index;i<(index+count2);i++)
        {
            arr[i]=1;;
            index1++;
        }
        for(i=index+count2;i<(index+index1+count3);i++)
        {
            arr[i]=2;
        }
    }
};