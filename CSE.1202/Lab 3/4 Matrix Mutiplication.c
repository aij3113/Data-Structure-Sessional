#include<stdio.h>

int main()
{
    int A[3][2]={2,3,1,2,5,3},B[2][3]={1,4,2,3,1,3};
    int C[3][3],i,j,k;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",C[i][j]);

        printf("\n");

    }

    return 0;
}
