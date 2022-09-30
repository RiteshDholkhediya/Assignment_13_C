#include<conio.h>
#include<stdio.h>
int sumOfDigits(int n);
int main(){
    int n;
    printf("Program to calculate sum of digits of number\n");
    printf("Enter a number");
    scanf("%d",&n);
    printf("Sum of digit is  %d",sumOfDigits(n));
    return 0;
}

int sumOfDigits(int n){
    if(n==0)
        return 0;
    return sumOfDigits(n/10)+n%10;
}