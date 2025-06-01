#include<stdio.h>

int main(){
    // Q: What data type will 3.0/8 – 2 return?
    float f= 3.0 /8 -2;
    printf("The value of f is %f",f);
    int i = 3.0 /8 -2;
    printf("\nThe Value of i in integer is %d",i);

    // Q. Write a program to check whether a number is divisible by 97 or not.
    int num = 97;
    printf("\nThe value of num%97 is %d", num%97);
    
    // Q. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    int ans = 3*x /y -z+k;
    printf("The Value of ans is %d", ans);
    return 0;
}