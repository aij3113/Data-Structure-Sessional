#include<stdio.h>

int main()
{
    char info[12]={'\0','\0','U','E','C','R','T','E','\0','\0','S','\0'},item='R';
    int link[12]={10,'\0',8,'\0',11,3,5,7,1,12,4,2};
    int i,j,loc,locp='\0',start=6,avail=1,ptr;
    ptr=start;
    while(ptr!='\0')
    {
        printf("%d %c %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }
    for(i=0;i<12;i++){
        if(item==info[i]){
            loc=i+1;
            for(j=0;j<12;j++){
                if(loc==link[j]){
                        locp=j+1;
                        break;
                }
            }
            break;
        }
    }

   if(locp=='\0')
        start=link[start-1];
    else
        link[locp-1]=link[loc-1];

    printf("\n");
   link[loc-1]=avail;
    avail=loc;
    ptr=start;
    while(ptr!='\0')
    {
        printf("%d %c %d\n",ptr,info[ptr-1],link[ptr-1]);
        ptr=link[ptr-1];
    }

    return 0;
}
