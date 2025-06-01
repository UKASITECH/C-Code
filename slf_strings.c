#include<stdio.h>
#include<string.h>

int main(){
    // Standerd library function for strings
    // strlen() - length of string
    char st[] ="Umang";
    int length = strlen(st);
    printf("%d\n",length);

    //strcpy()
    char source[] = "umang";
    char target[30];
    printf("%s", strcpy(target,source)); // target now contains harry

    char s1[12] = "hello";
    char s2[] = "umang";
    strcat(s1,s2); // s1 now contains helloumang with no space

    // strcmp() - used to compare two strings, it return 0 if strings are equal
    strcmp("far","joke"); // negative value
    strcmp("joke","far"); // positive value

    return 0;
}