#include <stdio.h>
int main()
{
int age;
printf("Enter your age: ");
scanf("%d", &age);
if (age < 0)
{
printf("Age cannot be less than Zero.\n");
}
else if (age >= 18)
{
printf("You are eligible to cast your vote.\n");
}
else
{
printf("You are not eligible to vote yet.\n");
}
return 0;
}