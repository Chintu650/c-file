#include<stdio.h>

int main()
{
  int i,j,m,n;
  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d%d",&m,&n);
 
  int a[m][n];

  printf("\n Enter the 1st matrix elements: ");
  for ( i = 0; i < m; i++ )
  for ( j = 0; j < n; j++ )
  scanf("%d",&a[i][j]);
 
  printf("\n The 1st matrix is:\n");
  for ( i = 0; i < m; i++)
  {
    for ( j = 0; j < n; j++)
    { printf(" %d ",a[i][j]); }
      printf("\n");
  }
  return 0;
}