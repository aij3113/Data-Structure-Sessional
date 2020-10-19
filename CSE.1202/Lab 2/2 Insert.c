#include<stdio.h>

int main()
{
    int J,K,X,LA[100]={23,54,67,89,88,76,57,32,12,69},N=10;

    scanf("%d %d",&K,&X);

    K=K-1;
    J=N-1;
    while(K<=J)
    {
        LA[J+1]=LA[J];
        J=J-1;
    }

    LA[K]=X;
    N=N+1;
    for(J=0;J<N;J++)
        printf("%d ",LA[J]);

    return 0;
}
