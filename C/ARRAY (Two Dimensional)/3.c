#include <stdio.h>

int main()
{
int row, col,i,j;

printf("Enter the number of rows in The Matrix: ");
scanf("%d", &row);
printf("Enter the number of columns in The Matrix: ");
scanf("%d", &col);

int matrix1[row][col], matrix2[row][col], sub[row][col];

printf("\nEnter elements of the first matrix[%d x %d]:\n",row,col);
for ( i = 0; i < row; i++)
{
for ( j = 0; j < col; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix1[i][j]);
}
}

printf("\nEnter elements of the second matrix:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix2[i][j]);
}
}

for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
sub[i][j] = matrix1[i][j] - matrix2[i][j];

}
}

printf("\nThe 1st Matrix is:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("%d\t", matrix1[i][j]);
}
printf("\n");
}

printf("\nThe 2nd Matrix is:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("%d\t", matrix2[i][j]);
}
printf("\n");
}

printf("\nSubtraction of the two matrices:\n");
for ( i = 0; i < row; i++)
{
for ( j = 0; j < col; j++)
{
printf("%d\t", sub[i][j]);

}
printf("\n");
}

return 0;
}