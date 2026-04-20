class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp,n=0,i=0;
        n=s.size();
        n=n-1;
        i=0;
        while(i<n)
        {
            temp=s[i];
            s[i]=s[n];
            s[n]=temp;
            i++;
            n--;
        }
    }
};