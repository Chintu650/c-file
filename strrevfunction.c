#include<stdio.h>
#include<string.h>
int main () {
    int i,len=0;
    char str[30];
    printf("enter a string:");
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    printf("the reverse of string is: %s",strrev(str));
    return 0;
}