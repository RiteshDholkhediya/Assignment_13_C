#include<conio.h>
#include<stdio.h>
int sumN(int n);
int main(){
    int n;
    printf("Program to calculate sum of first natural number\n");
    printf("Enter a number");
    scanf("%d",&n);
    printf("Sum %d numbers is %d",n,sumN(n));
    return 0;
}

int sumN(int n){
    if(n==1)
        return 1;
    return sumN(n-1)+n;
}