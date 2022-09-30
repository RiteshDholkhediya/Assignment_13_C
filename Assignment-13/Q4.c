#include<conio.h>
#include<stdio.h>
int sumOfSquare(int n);
int main(){
    int n;
    printf("Program to calculate sum of square of natural number\n");
    printf("Enter a number");
    scanf("%d",&n);
    printf("Sum of squares of %d numbers is %d",n,sumOfSquare(n));
    return 0;
}

int sumOfSquare(int n){
    if(n==1)
        return 1;
    return sumOfSquare(n-1)+n*n;
}