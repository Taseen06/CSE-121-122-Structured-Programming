#include <stdio.h>
int main() {
double x, y, z;
printf("Enter three numbers:\n");
scanf("%lf \n%lf \n%lf", &x, &y, &z);
if (x >= y && x >= z)
{
printf("%.2lf is the largest number.\n", x);
}
else if (y >= x && y >= z)
{
printf("%.2lf is the largest number.\n", y);
}
else
{
printf("%.2lf is the largest number.\n", z);
}
return 0;
}