#include<stdio.h>

int main(){
    int STACK[10]={100,200,300};
    int top=3,max=10,ITEM,i;

    printf("\tBefore PUSH\n");
    for(i=0;i<top;i++)
    printf("%d  ",STACK[i]);

    if(top==max)
        printf("Overflow\n");
    else{
            printf("\n\nEnter ITEM: ");
            scanf("%d",&ITEM);
        top=top+1;
        STACK[top-1]=ITEM;
    }

    printf("\n\tAfter PUSH\n");
    for(i=0;i<top;i++)
        printf("%d  ",STACK[i]);
    printf("\n");

    return 0;
}
