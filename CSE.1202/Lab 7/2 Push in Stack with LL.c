#include<stdio.h>

int main(){
    int info[10]={10,20,30,40,50,0,0,0,0,0};
    int link[10]={2,3,4,5,0,7,8,9,10,0};
    int start=1,top=5,avail=6,ptr,New,item;

    ptr=start;
    while(ptr!=0){
        printf("  %d\n",info[ptr-1]);
        ptr=link[ptr-1];
    }
    if(avail==0)
        printf("Overflow\n");
    else{
        New=avail;
        avail=link[avail-1];
        link[New-1]=0;
        scanf("%d",&item);
        info[New-1]=item;
        link[top-1]=New;
    }
    ptr=start;
    while(ptr!=0){
        printf("  %d\n",info[ptr-1]);
        ptr=link[ptr-1];
    }

    return 0;
}
