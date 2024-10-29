#include <stdio.h>
int main()
{
int n, sum = 0;

printf("Enter the value of n: ");
scanf("%d", &n);

if (n < 1)
{
printf("Please enter a positive integer greater than 0.\n");
}
else
{

printf("The first %d even numbers are:\n", n);

for (int i = 1; i <= n; i++)
{
printf("%d ",2*i);
sum =sum+(2*i);
}
printf("\nSum of the first %d even numbers is: %d\n", n, sum);
}

return 0;
}