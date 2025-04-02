#include<stdio.h>
#include<string.h>
int main () {
    int i, len=0;
    char str[30];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("\n The length of the string is: %d", strlen(str));
    return 0;
}