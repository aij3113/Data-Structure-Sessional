#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'},item='U';
    int link[12]={10,'\0',8,6,11,3,5,7,1,12,4,2};
    int i,j,loc,start=6,locp=link[start-1],avail=1,ptr;

    ptr=link[start-1];
    while(ptr!=start&&ptr!='\0'){
        printf("%d \t %c \t %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }

    ptr=link[start-1];
    while(info[ptr-1]!=item&&ptr!=start){
        ptr=link[ptr-1];
    }
    if(info[ptr-1]==item){
        loc=ptr;
        for(i=0;i<12;i++){
            if(loc==link[i]){
                locp=i+1;
                break;
            }
        }
    }
    if(locp==link[start-1])
        start=link[start-1];
    else
        link[locp-1]=link[loc-1];

    link[loc-1]=avail;
    avail=loc;

    printf("\n");
    ptr=link[start-1];
    while(ptr!=start&&ptr!='\0'){
        printf("%d \t %c \t %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }


    return 0;
}
