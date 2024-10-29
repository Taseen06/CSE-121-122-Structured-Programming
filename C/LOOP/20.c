#include <stdio.h>
int main()
{
int n, num = 1,i,j;
printf("Enter the number of rows for Floyd's Triangle: ");
scanf("%d", &n);
printf("Floyd's Triangle with %d rows:\n", n);
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= i; j++)
{
printf("%d ", num);
num++;
}
printf("\n");
}
return 0;
}