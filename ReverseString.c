#include<stdio.h>
int main () {
    int i,len=0;
    char str[30];
    printf("Enter a string:");
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    printf("\n The reverse of that string is: ");
    for(i=len-1;i>=0;i--)
    printf("%c",str[i]);
    return 0;
}

