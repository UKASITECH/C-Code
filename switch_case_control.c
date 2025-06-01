#include<stdio.h>

int main(){
    // Switch Case Control can handle multiple requests from user or can handle multiple responses at a time
    int x;
    printf("Enter a number from 1 to 10 : ");
    scanf("%d", &x);
    switch (x)      
    {
    case 1:
        printf("You choose 1");
        break;
    
    case 2:
         printf("You choose 2");
         break;
    case 3:
         printf("You choose 3"); 
         break;    
    case 4:
         printf("You choose 4");
         break;
    case 5:
         printf("You choose 5");
         break;
    case 6:
         printf("You choose 6");
         break;  
    default:
         printf("Umang is great"); 
    }       
         return 0;
}