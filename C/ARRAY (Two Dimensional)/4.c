#include <stdio.h>

int main()
{
int i,j,n;

printf("Enter the size (n) of the square matrices: ");

scanf("%d", &n);

int matrix1[n][n], matrix2[n][n], mul[n][n];

printf("\nEnter elements of the first matrix[%d x %d]:\n",n,n);
for ( i = 0; i < n; i++)
{
for ( j = 0; j < n; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix1[i][j]);
}
}

printf("\nEnter elements of the second matrix[%d x %d]:\n",n,n);
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix2[i][j]);
}
}

printf("\nThe 1st Matrix is:\n");
for (i = 0; i < n; i++)
{

for (j = 0; j < n; j++)
{
printf("%d\t", matrix1[i][j]);
}
printf("\n");
}

printf("\nThe 2nd Matrix is:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", matrix2[i][j]);
}
printf("\n");
}

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
mul[i][j] = 0;
for (int k = 0; k < n; k++)
{
mul[i][j] += matrix1[i][k] * matrix2[k][j];
}
}
}

printf("\nMultiplication of the two matrices:\n");
for ( i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", mul[i][j]);
}
printf("\n");
}

return 0;
}