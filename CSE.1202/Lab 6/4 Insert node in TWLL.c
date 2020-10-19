#include<stdio.h>

 int main(){
    char INFO[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'},ITEM;
    int FORW[12]={12,9,8,'\0',11,3,5,7,'\0',2,4,10};
    int BACK[12]={0,0,6,11,7,0,8,3,0,0,5,0};
    int ptr,start=6,Back_start=4,avail=1,LOC=6,New;

    printf("Previous    Current    Next\n");
    ptr=start;
    while(ptr!='\0'){
        printf(" %c\t\t%c\t  %c\n",INFO[BACK[ptr-1]-1],INFO[ptr-1],INFO[FORW[ptr-1]-1]);
        ptr=FORW[ptr-1];
    }
    if(avail=='\0')
        printf("Overflow");
    else{
        New=avail;
        avail=FORW[avail-1];
        scanf("%c",&ITEM);
        INFO[New-1]=ITEM;

        if(LOC==0){
            start=New;
            FORW[New-1]=0;
            BACK[New-1]=0;
        }
        else{
            FORW[New-1]=FORW[LOC-1];
            BACK[New-1]=LOC;
            BACK[FORW[LOC-1]-1]=New;
            FORW[LOC-1]=New;
        }
    }

    printf("Previous    Current    Next\n");
    ptr=start;
    while(ptr!='\0'){
        printf(" %c\t\t%c\t  %c\n",INFO[BACK[ptr-1]-1],INFO[ptr-1],INFO[FORW[ptr-1]-1]);
        ptr=FORW[ptr-1];
    }
    return 0;
 }
