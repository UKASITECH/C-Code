#include<stdio.h>

int main(){
    label:
        printf("Umang is a good boy");
        goto end;
    printf("Hello duniya");
    goto label;   
    end:
        printf("You are at end"); 
    return 0;
}