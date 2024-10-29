#include <stdio.h>
int main()
{
int row, col,i,j;

printf("Enter the number of rows in The Matrix: ");
scanf("%d", &row);
printf("Enter the number of columns in The Matrix: ");
scanf("%d", &col);

int matrix[row][col];

printf("\nEnter elements of the matrix[%d x %d]:\n",row,col);
for ( i = 0; i < row; i++)

{
for ( j = 0; j < col; j++)
{
printf("Enter element at INDEX [%d] [%d] :", i , j);
scanf("%d", &matrix[i][j]);
}
}

printf("\nThe Matrix is:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("%d\t", matrix[i][j]);
}
printf("\n");
}

int isIdentity = 1;

for (i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
if (i == j)
{
if (matrix[i][j] != 1)
{
isIdentity = 0;

break;
}
}
else
{
if (matrix[i][j] != 0)
{
isIdentity = 0;
break;
}
}
}
if (isIdentity==0)
{
break;
}
}

if (isIdentity==1)
{
printf("\nThe matrix is an identity matrix.\n");
}
else
{
printf("/nThe matrix is not an identity matrix.\n");
}

return 0;
}