#include<stdio.h>
int main() { 
    int i, len=0;
    char str[30];
    printf("Enter a string:");
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    printf("\n The length of the string is: %d",len);
    return 0;
}