#include<stdio.h>

int main()
{
    int a,i,k,c=0,n,A[20]={14,56,31,57,87,11,7,23,42,2,45,78,93,91,79,81,9,63,37,1};

    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(k=i;k>=0;k--)
         {
            if(A[k]<A[k-1])
            {
                a=A[k];
                A[k]=A[k-1];
                A[k-1]=a;
                c++;
            }
            c++;
         }
         c++;
    }
    printf("\n%d",c);

    return 0;
}
