#include<stdio.h>
#include<string.h>
int main () {
    char str1[20], str2[20];
    int i, len1, len2;
    printf("Enter the 1st string:");
    scanf("%s", str1);
    strcpy(str2,str1);
    printf("\n The 1st string is:%s",str1);
    printf("\n The 2nd string is:%s",str2);
    return 0;
}