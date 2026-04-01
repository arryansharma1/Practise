class Solution {
  public:

    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+1-i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }
};