#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'};
    int link[12]={'\0','\0',8,'\0',11,3,5,7,'\0','\0',4,'\0'};
    int start=6,ptr;

    ptr=start-1;
    printf("\n\tCurrent\tInfo\tNext\n");
    while(ptr!='\0'&&ptr>0)
    {
        printf("\t  %d \t %c \t %d\n",ptr+1,info[ptr],link[ptr]);
        ptr=link[ptr]-1;
    }

    return 0;
}
