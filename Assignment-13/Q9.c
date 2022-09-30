#include<stdio.h>
int countDigit(int);

int main(){

    printf("%d ",countDigit(32177));
    return 0;
}

int countDigit(int n){
    static int k=0;
    if(n>0){
        countDigit(n/10);
        return ++k;
    }
    return 0;
}