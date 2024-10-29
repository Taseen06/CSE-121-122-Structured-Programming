#include <stdio.h>

int main()
{
int i,j,n;

printf("Enter the size (n) of the square matrices: ");
scanf("%d", &n);

int matrix[n][n];

printf("\nEnter elements of the matrix[%d x %d]:\n",n,n);
for ( i = 0; i < n; i++)
{
for ( j = 0; j < n; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix[i][j]);
}
}

printf("\nThe Matrix is:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", matrix[i][j]);
}

printf("\n");
}

int sum = 0;

for (i = 0; i < n; i++)
{
sum += matrix[i][i];
}

printf("\nSum of the right diagonal elements: %d\n", sum);

return 0;

}