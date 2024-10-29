#include <stdio.h>
int main()
{
int x;
printf("Enter an integer: ");
scanf("%d", &x);
if (x > 0)
{
printf("%d is a positive number.\n", x);
}
else if (x < 0)
{
printf("%d is a negative number.\n", x);
}
else
{
printf("%d is neither positive nor negative (it's zero).\n", x);
}
return 0;