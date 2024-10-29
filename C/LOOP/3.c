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
printf("The first %d odd numbers are:\n", n);

for (int i = 1; i <= n; i++)
{
printf("%d ",2*i-1);
sum =sum+(2*i-1);
}
printf("\nSum of the first %d odd numbers is: %d\n", n, sum);
}

return 0;