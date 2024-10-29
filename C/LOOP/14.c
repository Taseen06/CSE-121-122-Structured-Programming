#include <stdio.h>
int main()
{
int n = 4,i,j;
for ( i = n-1; i >= 0; i--)
{
for ( j = 0; j <= i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}