class Solution {
  public:

    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
};