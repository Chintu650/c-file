#include<stdio.h>
int main () {
    int i,n, *ptr;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    ptr=a;
    printf("\nThe array elements are:");
    for(i=0;i<n;i++)
    printf(" %2d ", *(ptr+i));
    return 0;
}