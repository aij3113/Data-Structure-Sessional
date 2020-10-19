#include<stdio.h>

int main(){
    int info[12]={'\0','\0',201,402,325,101,301,251,'\0','\0',385,'\0'};
    int link[12]={'\0','\0',8,'\0',11,3,5,7,'\0','\0',4,'\0'};
    int start=6,ptr,item,loc=-1;

    scanf("%d",&item);
    ptr=start-1;
    while(ptr!='\0'&&ptr>0){
        if(item>info[ptr])
            ptr=link[ptr]-1;
        else if(item==info[ptr]){
            loc=ptr+1;
            break;
        }
        else{
            loc=-1;
            break;
        }
    }
    if(loc==-1)
        printf("\nData not Found\n");
    else
        printf("\nLOCATION: %d\n",loc);

    return 0;
}
