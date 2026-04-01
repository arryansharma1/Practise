class Solution {
  public:

    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<i;j++)
                {
                    printf(" ");
                }
                for(j=0;j<((2*n)-1-(2*i));j++)
                {
                    printf("*");
                }
            printf("\n");
        }
    }
};