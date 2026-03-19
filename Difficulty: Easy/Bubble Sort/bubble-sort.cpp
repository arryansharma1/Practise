class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int i,j,count=1,n,temp;
        n=arr.size();
        while(count)
        {
            count=0;
            temp=0;
            for(i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    count++;
                }
            }
        }
    }
};