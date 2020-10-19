#include<stdio.h>

int main(){
    int info[8]={0,10,25,30,20,0,15,0};
    int left[8]={5,4,-1,-1,2,7,-1,-1};
    int right[8]={-1,6,-1,-1,-1,-1,3,-1};
    int root=1,Stack[10],ptr,top,p;

    top=0;
    Stack[0]=-1;
    ptr=root;
p:  while(ptr!=-1){
        top=top+1;
        Stack[top]=ptr;
        if(right[ptr]!=-1){
            top=top+1;
            Stack[top]=right[ptr];
        }
        ptr=left[ptr];
    }
    ptr=Stack[top];
    top=top-1;
    while(ptr>-1){
        printf("\t%d\n",info[ptr]);
        ptr=Stack[top];
        top=top-1;
    }
    if(ptr<=-1){
        ptr=-ptr;
        goto p;
    }

    return 0;
}
