#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'},item='E';
    int link[12]={10,'\0',8,6,11,3,5,7,1,12,4,2};
    int start=6,avail=1,ptr,loc;

    ptr=link[start-1];
    while(ptr!=start)
    {
        printf("%d \t %c \t %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }
    ptr=link[start-1];
    while(info[ptr-1]!=item&&ptr!=start){
        ptr=link[ptr-1];
    }
    if(info[ptr-1]==item)
         loc=ptr;
    else
        loc='\0';

    printf("\nLocation: %d\n",loc);

    return 0;
}
