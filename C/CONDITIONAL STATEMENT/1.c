#include <stdio.h>
int main()
{
int x, y;
printf("Enter the first integer: ");
scanf("%d", &x);
printf("Enter the second integer: ");
scanf("%d", &y);
if (x == y)
{
printf("The two integers are equal.\n");
}
else
{
printf("The two integers are not equal.\n");
}
return 0;
}