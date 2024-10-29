#include<stdio.h>
int main()
{
int n, i;

printf("Enter an integer: ");
scanf("%d", &n);

printf("\n\nValue of 1^2 to %d^2 are:\n", n);

for (i = 1; i <= n; i++)
{
printf("%d^2 = %d\n", i, i*i);
}

return 0;
}