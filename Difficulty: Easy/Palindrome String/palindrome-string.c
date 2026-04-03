// User function template for C
bool isPalindrome(char s[]) {
    // code here
    int i=0,j,flag=0;
    while(s[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag++;
        }
        i++;
        j--;
    }
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}