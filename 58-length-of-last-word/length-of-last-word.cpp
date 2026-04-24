class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,n,count=0;
        n=s.size();
        for(i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
            }
            else if(s[i+1]!=' ' && i!=n-1)
            {
                break;
            }
        }
        return count;
    }
};