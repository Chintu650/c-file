#include<stdio.h>
int printmat(int[10][10],int,int);
int main()
{
   int i, j, arr[10][10], m, n;
   printf("Enter the number of rows and columns of the matrix: ");
   scanf("%d%d",&m,&n);
   printf("\n Enter the matrix elements: ");
   for ( i = 0; i < m; i++ )
    for ( j = 0; j < n; j++ )
       scanf("%d",&arr[i][j]);
  printf("\n The matrix is:\n");
  printmat(arr,m,n);
  return 0;
}

int printmat(int b[10][10],int p,int q)
{
  int i, j;
  for ( i = 0; i < p; i++ )
  {
      for ( j = 0; j < q; j++ )
         { printf(" %d ",*(*(b+i)+j)); }	
      printf("\n");   
  } 
  return 0;  
}
