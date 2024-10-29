#include <stdio.h>

int main()
{
int row, col,i,j;

printf("Enter the number of rows in The Matrix: ");
scanf("%d", &row);
printf("Enter the number of columns in The Matrix: ");
scanf("%d", &col);

int matrix1[row][col], matrix2[row][col];

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

int areEqual=1 ;

for (i = 0; i < row; i++)

{
for ( j = 0; j < col; j++)
{
if (matrix1[i][j] != matrix2[i][j])
{
areEqual = 0;
break;
}
}
if (areEqual==0)
{
break;
}
}

if (areEqual==1)
{
printf("\nThe matrices are equal.\n");
}
else
{
printf("\nThe matrices are not equal.\n");
}

return 0;
}