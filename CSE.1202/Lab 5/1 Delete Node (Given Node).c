#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'};
    int link[12]={10,'\0',8,'\0',11,3,5,7,1,12,4,2};
    int loc=4,locp=11,start=6,avail=1,ptr;
    ptr=start;
    while(ptr!='\0')  //traverse before delete
    {
        printf("%d %c %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }

    if(locp=='\0')
        start=link[start-1];
    else
        link[locp-1]=link[loc-1];

    printf("\n");
    link[loc-1]=avail;
    avail=loc;
    ptr=start;
    while(ptr!='\0')    //traverse after delete
    {
        printf("%d %c %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }


    return 0;
}
