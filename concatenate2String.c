#include <stdio.h>

int main() {
    char str1[20], str2[20];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }
    str1[i + j] = '\0'; 
    printf("The concatenated string is: %s\n", str1);
    return 0;
}
