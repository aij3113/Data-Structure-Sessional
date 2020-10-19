#include<stdio.h>

int factorial(int fact,int n){
    if(n==0)
        fact=1;
    else
        fact=n*factorial(fact,n-1);

    return fact;
}

int main(){
    int n,fact;

    scanf("%d",&n);
    fact=factorial(fact,n);
    printf("\nFactorial %d =  %d\n",n,fact);

    return 0;
}
