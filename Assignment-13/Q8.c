#include<stdio.h>
#include<conio.h>
int fibo(int);
int main(){
    int n,i=1;
    printf("Enter the number of elements of fibonacci series");
    scanf("%d",&n);
    //printf("%d term is %d",n,fibo(n));
    while(i<=n){
        printf("%d ",fibo(i));
        i++;
    }
    //fibo(n);
    return 0;
}


int fibo(int n){
    if(n==0){
        return 1;
    }
        
    if(n==1){
        return 0;
    }

    return fibo(n-1) + fibo(n-2);
}