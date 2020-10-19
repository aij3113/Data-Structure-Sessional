#include<stdio.h>

int main()
{
    int k=1,l=1,A[10]={14,56,31,57,87,11,7,23,42,2};
    int m=A[0];

    while(k<10)
    {
        if(m<A[k])
        {
            m=A[k];
            l=k+1;
        }
        k++;
    }
    printf("\nLOC: %d  MAX: %d\n",l,m);


    return 0;
}
