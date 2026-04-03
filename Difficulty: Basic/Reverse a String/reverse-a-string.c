// User function Template for C
char* reverseString(char* s) {
    // Code Here
    int i=0,j,temp;
    while(s[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    return s;
}