#include<stdio.h>

int main()
{
    int K,LB,UB,LA[10]={23,56,34,58,98,86,75,71,91,47};

    scanf("%d %d",&LB,&UB);

    K=LB-1;
    while(K<UB)
    {
        printf("%d ",LA[K]);
        K=K+1;
    }

    return 0;
}
