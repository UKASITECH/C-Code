#include<stdio.h>

int main(){
    int a;
    printf("Enter a Number between 0 and 1: ");
    scanf("%d",&a);
    if (a == 0)
    {
        printf("Umang is mad\n");
    } else if (a == 3){
        printf("Umang is great\n");
    } else{
        printf("Umang is your dad\n");
    }
    if (a == 1)
    {
        printf("Umang is sad\n");
    } else{
        printf("Umang lag\n");
    }
    return 0;
}