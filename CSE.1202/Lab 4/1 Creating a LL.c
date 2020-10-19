#include<stdio.h>

char info[15];
int link[10]={2,3,4,5,6,7,8,9,1,-1};
int start=-1;
int avail=0;

int newnode(){
        int newindex;
        if(avail==-1){
            printf("\nOverflow\n");
            return -1;
        }
        else{
            newindex=avail;
            avail=link[avail];
            return newindex;
        }
}

void creat_list(){
    int ptr=-1,i,newindex;
    char ch='H';

    for(i=0;i<10;i++)
    {
        newindex=newnode();
        if(newindex==-1)
            break;

        info[newindex]=ch;
        link[newindex]=-1;

        if(start==-1){
            start=newindex;
            ptr=newindex;
        }
        else{
            link[ptr]=newindex;
            ptr=newindex;
        }
        ch++;
    }
    ptr=-1;
}

/*void traverse_list(){
    int ptr=0;
    ptr=start;
    printf("Current\tInfo\tNext\n");
    while(ptr!=-1)
    {
        printf(" %d \t %c \t %d\n",ptr,info[ptr],link[ptr]);
        ptr=link[ptr];
    }
}*/

int main()
{
    creat_list();
  //  traverse_list();

    return 0;
}
