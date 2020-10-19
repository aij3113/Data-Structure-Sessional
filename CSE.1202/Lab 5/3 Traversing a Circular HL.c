#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'};
    int link[12]={10,'\0',8,6,11,3,5,7,1,12,4,2};
    int start=6,avail=1,ptr;

    printf("Current\tInfo\tNext\n");
    ptr=link[start-1];
    while(ptr!=start)
    {
        printf("%d \t %c \t %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }

    return 0;
}
