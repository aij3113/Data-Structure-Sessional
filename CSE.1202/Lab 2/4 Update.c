#include<stdio.h>

int main()
{
    int A,X,I,K;
    int LA[10]={34,67,87,54,26,84,59,73,89,97},N=10;

    scanf("%d %d",&K,&X);
    for(I=0;I<N;I++)
       {
           if(I==(K-1))
            {
                A=LA[I];
                LA[I]=X;
            }
       }
    for(I=0;I<N;I++)
        printf("%d  ",LA[I]);

    return 0;
}
