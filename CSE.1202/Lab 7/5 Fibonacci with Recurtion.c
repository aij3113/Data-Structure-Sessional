#include<stdio.h>

int fibonacci(fib,n){
    int fiba,fibb;
    if(n==0||n==1)
        fib=n;
    else
        fib=fibonacci(fib,n-2)+fibonacci(fib,n-1);

    return fib;
}

int main(){
    int n,fib;

    scanf("%d",&n);
    fib=fibonacci(fib,n);
    printf("\n\n%dth of Fibonacci Sequence =  %d\n",n,fib);

}
