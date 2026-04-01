// User function Template for C++

class Solution {
  public:
    int findSum(int arr[], int N) {
        // code here.
        int i,max=arr[0],min=arr[0];
        for(i=0;i<N-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
            else
            {
                if(arr[i+1]>max)
                {
                    max=arr[i+1];
                }                
            }
        }
        
        for(i=0;i<N-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
            else
            {
                if(arr[i+1]<min)
                {
                    min=arr[i+1];
                }                
            }
        }
        return max+min;
    }
};