class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int x,temp=n,count=0;
        while(temp>0)
        {
            x=temp%10;
            if(x!=0 && n%x==0)
            {
                count++;
            }
            temp=temp/10;
        }
        return count;
    }
};