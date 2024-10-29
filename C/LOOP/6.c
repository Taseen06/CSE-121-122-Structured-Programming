#include <stdio.h>
int main()
{
int n, x = 0, y = 1, z, i;
printf("Enter the number of (n)terms you want in the Fibonacci series: ");
scanf("%d", &n);
printf("\n\nThe first %d terms of Fibonacci Series are:\n",n);

for (i = 0; i < n; i++)
{
if (i <= 1)
{
z = i;
}

else
{
z = x + y;
x = y;
y = z;
}
printf("%d ", z);
}
printf("\n");
return 0;
}