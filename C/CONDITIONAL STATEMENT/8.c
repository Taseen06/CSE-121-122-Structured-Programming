#include <stdio.h>
int main()
{
int x;
printf("Enter a day number (1-7):\n");
scanf("%d", &x);
switch (x)
{
case 1:
printf("Monday.\n");
break;
case 2:
printf("Tuesday.\n");
break;
case 3:
printf("Wednesday.\n");
break;
case 4:
printf("Thursday.\n");
break;
case 5:
printf("Friday.\n");
break;
case 6:
printf("Saturday.\n");

break;
case 7:
printf("Sunday.\n");
break;
default:
printf("Invalid day number. Please enter a number from 1 to 7.\n");
}
return 0;
}