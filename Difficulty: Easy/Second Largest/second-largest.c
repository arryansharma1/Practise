int getSecondLargest(int *a, int n) {
    // code here
    int x,i,j,max1=-1,max2=-1,count=0;
    if(n>=2)
    {    if(a[0]>a[1])
        {
            if(a[0]!=a[1])
            {   
                max1=a[0];
                max2=a[1];
            }
        }
        else
        {
            max1=a[1];
            if(a[0]!=a[1])
            {
                max2=a[0];
            }
        }
        
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    return max2;
}
