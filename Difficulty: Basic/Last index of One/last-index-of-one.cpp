class Solution {
  public:
    int lastIndex(string s) {
        int i=0,n=0,last=-1;
        while(s[i]!='\0')
        {
            n++;
            i++;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                last=i;
            }
        }
        return last;
    }
};