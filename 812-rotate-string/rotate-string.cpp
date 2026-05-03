class Solution {
public:
    bool rotateString(string s, string goal) {
        int count=0,i,n,j;
        char temp;
        n=s.size();
        for(i=0;i<n;i++)
        {
            temp=s[n-1];
            for(j=n-2;j>=0;j--)
            {
                s[j+1]=s[j];
            }
            s[0]=temp;
            if(s==goal)
            {
                count++;
                break;
            }
        }
        return count;
    }
};