#include<conio.h>
#include<stdio.h>
int sumNO(int n);
int main(){
    int n;
    printf("Program to calculate sum of first odd natural number\n");
    printf("Enter a number");
    scanf("%d",&n);
    printf("Sum %d numbers is %d",n,sumNO(n));
    return 0;
}

int sumNO(int n){
    if(n==1)
        return 1;
    return sumNO(n-1)+2*n-1;
}