//Back-end complete function Template for C++
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j,x=n-1;
        for(i=1;i<=((n*2)-1);i++)
        {
            if(i<=n)
            {
                for(j=1;j<=i;j++)
                {
                    cout<<"* ";
                }
            }
            else
            {
                for(j=x;j>=1;j--)
                {
                    cout<<"* ";
                }
                x--;
            }
            cout<<"\n";
        }
    }
};