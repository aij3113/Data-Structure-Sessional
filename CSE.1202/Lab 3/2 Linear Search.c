#include<stdio.h>

int main()
{
    int A[]={43,21,67,98,76,47,23,12,69,55},x,k=0,n,loc=-1;

    n=sizeof(A)/4;
    scanf("%d",&x);

    while(loc==-1&&k<n)
    {
        if(x==A[k])
            loc=k+1;
        k++;
    }
    if(loc==-1)
        printf("%d is not in the Array\n",x);
    else
        printf("%d is the location of %d\n",loc,x);

    return 0;
}
