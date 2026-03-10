// User function template for C
int largest(int a[], int n) {
    // Code Here
    int i,max=0,j,size;
    size= sizeof (a) / sizeof (a[0]);
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[j])
        {
            if(a[i]>=max)
            max=a[i];
        }
        else
        {
            if(a[i]>=max)
            max=a[i];
        }
    }
    return max;
}