#include<stdio.h>
#include<math.h>

int main()
{
    int k,l,n,c=0;

    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(l=1;l<=n;l++)
        {
            printf("L ");
            c++;
        }
        printf("K ");
        c++;
    }
    printf("\n%d",c);

    return 0;
}
