#include<stdio.h>

int main(){
    // Type Decleartion in C
    // We can declare type of any variable using type decleartion

    int a; // Integer
    float b; //float 
    char c; //character

    int x = 1;
    int y = x; // Here the value of y is x which is 1
    printf("Value of x is %d and The value of b is %d",x,y);

    // We can define diffrent types of value in one line
    int w,r,t,u,i;
    w = r= t=u=i = 20; // The Values will be same in any varable is 20
    return 0;
}