#include<stdio.h>

int main()
{
    int j,k,x,LA[100]={23,54,67,89,88,76,57,32,12,69},n=10;

    scanf("%d",&k);

    x=LA[k-1];
    j=k-1;
    while(j<n-1)
    {
        LA[j]=LA[j+1];
        j=j+1;
    }

    n=n-1;
    for(j=0;j<n;j++)
        printf("%d ",LA[j]);


    return 0;
}
