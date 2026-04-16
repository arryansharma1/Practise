class Solution {
public:
    bool isPalindrome(int x) {
       long long int a=0,temp=x;
       while(temp>0)
       {
        a=a*10+temp%10;
        temp=temp/10;
       }
       if(a==x)
       {
        return 1;
       }
       else
       {
        return 0;
       }
    }
};