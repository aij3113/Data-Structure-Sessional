#include<stdio.h>

int main()
{
    int k=0,l=-1,x,A[10]={14,56,31,57,87,11,7,23,42,2};

    scanf("%d",&x);
    while(l==-1&&k<10)
    {
        if(x==A[k])
            l=k+1;
        k++;
    }
    if(l==-1)
        printf("\n%d is not in the array A.\n",x);
    else
        printf("\n%d is the location of %d\n",l,x);


    return 0;
}
