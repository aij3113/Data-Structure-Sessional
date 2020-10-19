#include<stdio.h>

int main(){
    int i,STACK[10]={100,200,300,400};
    int top=4,max=10,ITEM;

    printf("\tBefore POP\n");
    for(i=0;i<top;i++)
    printf("%d  ",STACK[i]);

    if(top==0)
        printf("Underflow\n");
    else{
        ITEM=STACK[top-1];
        top=top-1;
    }

    printf("\n\n\tAfter POP\n");
    for(i=0;i<top;i++)
        printf("%d  ",STACK[i]);
    printf("\n");

    return 0;
}
