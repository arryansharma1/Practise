// User function Template for C++
class Solution {
  public:
    string revStr(string s) {
        // code here
        int i=0,count=0,j,temp;
        while(s[i]!='\0')
        {
            count++;
            i++;
        }
        i=0;
        j=count-1;
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
};