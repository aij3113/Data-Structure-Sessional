 #include<stdio.h>

 int main()
 {
     int A[]={23,26,31,37,45,53,65,69,74,78,81,85,89,93,99};
     int n,x,lb,ub,mid,loc=-1;

     n=sizeof(A)/4;
     lb=0;  ub=n-1;
     mid=(lb+ub)/2;
     scanf("%d",&x);

     while(loc==-1&&lb<=ub)
     {
         if(x<A[mid])
            ub=mid-1;
         else if(x>A[mid])
            lb=mid+1;
         else
            loc=mid+1;
        mid=(lb+ub)/2;
     }
     if(loc==-1)
        printf("%d is not in the Array\n",x);
     else
        printf("%d is the location of %d\n",loc,x);


     return 0;
 }
