#include<conio.h>
#include<stdio.h>
int hcf(int x,int y);
int main(){
    int a,b;
    printf("Program to calculate sum of digits of number\n");
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("hcf of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}

int hcf(int x, int y){
    if(x>y){
        if(x%y==0)
            return y;
        return hcf(x%y,y);
    }
    else{
        if(y%x==0)
            return x;
       return hcf(x,y%x);
    }
}