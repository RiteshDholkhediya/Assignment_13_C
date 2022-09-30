#include<stdio.h>

int power(int, int); 

int main(){
    
    printf("%d ",power(2,5));
    return 0;
}

int power(int x, int y){

    if(y>0){
        return x*power(x,y-1);
    }
    return 1;
}