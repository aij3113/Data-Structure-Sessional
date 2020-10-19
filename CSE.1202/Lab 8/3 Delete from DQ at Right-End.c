#include<stdio.h>

int main(){
    int info[10]={10,20,30,40,50,0,0,0,0,0};
    int link[10]={2,3,4,5,0,7,8,9,10,0};
    int left=1,right=5,avail=6,ptr,New,item;

    ptr=left;
    while(ptr!=0){
        printf("  %d\n",info[ptr-1]);
        ptr=link[ptr-1];
    }
    if(right==0)
        printf("Underflow\n");
    else{
        item=info[right-1];
        link[right-1]=avail;
        avail=right;
        right=right-1;
        link[right-1]=0;
    }
    ptr=left;
    while(ptr!=0){
        printf("  %d\n",info[ptr-1]);
        ptr=link[ptr-1];
    }

    return 0;
}
