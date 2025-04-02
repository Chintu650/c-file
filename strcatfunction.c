#include<stdio.h>
#include<string.h>
int main () {
    int i;
    char str1[20], str2[20];
    printf("Enter the 1st string:");
    scanf("%s", str1);
    printf("Enter the 2nd string:");
    scanf("%s", str2);
    strcat(str1,str2);
    printf("\n The concatenated string is: %s",str1);
    return 0;
}