#include<stdio.h>
int main () {
    int i,count=0;
    char ch[30];
    printf("Enter a character: ");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        switch(ch[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
             
             count++;
        }
    }
    printf("\n The no. of vowels is: %d", count);
    return 0;
} 