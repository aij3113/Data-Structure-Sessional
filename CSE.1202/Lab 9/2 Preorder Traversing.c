#include<stdio.h>

int main(){
    int info[8]={0,10,25,30,20,0,15,0};
    int left[8]={5,4,-1,-1,2,7,-1,-1};
    int right[8]={-1,6,-1,-1,-1,-1,3,-1};
    int root=1,Stack[8],ptr,top,p;

    top=0;
    Stack[0]=-1;
    ptr=root;
    while(ptr!=-1){
        printf("\t%d\n",info[ptr]);
        if(right[ptr]!=-1){
            top=top+1;
            Stack[top]=right[ptr];
        }
        if(left[ptr]!=-1)
            ptr=left[ptr];
        else{
            ptr=Stack[top];
            top=top-1;
        }
    }

    return 0;
}
