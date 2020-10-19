#include<stdio.h>

int main()
{
    int A[]={43,21,67,98,76,47,23,12,69,55};
    int n,i,j=0,temp,swapped,p;

    n=10;
    p: swapped=0;

    for(i=1;i<n;i++)
    {
        j=j+1;
        if(A[i-1]>A[i])
        {
            temp=A[i-1];
            A[i-1]=A[i];
            A[i]=temp;
            swapped=1;
            j=j+4;
        }
    }


    if(swapped==1)
        goto p;
    printf("%d",j);

    return 0;
}
