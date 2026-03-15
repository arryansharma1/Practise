int missingNum(int *a, int size) {
    // code here
    long int i,count,j,x=0,index,sum=0,sum1=0,n=size+1;
    sum=((n*(n+1))/2);
    for(i=0;i<size;i++)
    {
        sum1=sum1+a[i];
    }
    x=sum-sum1;
    return x;
}
