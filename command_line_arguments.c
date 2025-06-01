#include<stdio.h>

int main(int argc, char* argv){
    // if we want to give the values from terminal without using scanf
    printf("The value of argc is %d\n", argc);
    // if you write thngs in terminal like these - .\command_line_arguments.exe umang is a good boy
    // will genrate no of words used and we doing it using terminal
    for (int i= 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i,argv[i]);
        
    }
    
    return 0;
}