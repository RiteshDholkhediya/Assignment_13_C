#include<conio.h>
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Program to calculate sum of digits of number\n");
    printf("Enter a number");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int n){
    if(n==0 || n==1)
        return 1;
    return fact(n-1)*n;
}