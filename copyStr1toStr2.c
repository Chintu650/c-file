#include <stdio.h> 

int main() { 
    char str1[20], str2[20];
    int i, len1, len2;

    printf("Enter the 1st string: "); 
    scanf("%s", str1);

    for(len1 = 0; str1[len1] != '\0'; len1++);
    len2=len1;

    for(i = 0; i<len2; i++) {
        str2[i] = str1[i];
    }
    str2[len2]='\0';
    printf("\nThe 1st string is: %s", str1); 
    printf("\nThe 2nd string is: %s", str2);

    return 0; 
}
