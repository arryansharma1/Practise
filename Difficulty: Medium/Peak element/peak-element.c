//  Function to find the peak element
int peakElement(int *arr, int n) {
    // code here
    int i,index=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            {
                index=i;
            }
        }
        if(i>0 && i<n-1)
        {   if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                if(index==0)
                {
                    index=i;
                }
            }
            
        }
        if(i==n-1)
        {
            if(arr[i]>arr[i-1])
            {
                index=i;
            }
        }
    }
    return index;
}