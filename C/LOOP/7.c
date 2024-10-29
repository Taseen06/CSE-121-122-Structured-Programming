#include <stdio.h>
int main()
{
int N,P=1;
printf("Enter a number: ");
scanf("%d", &N);

if (N <= 1)
{
printf("%d is not a prime number.\n", N);
}
else if (N <= 3)
{
printf("%d is a prime number.\n", N);
}
else if (N % 2 == 0 || N % 3 == 0)
{
printf("%d is not a prime number.\n", N);
}
else
{
for (int i = 5; i <= N-1; i++)
{
if (N % i == 0 )
{
P = 0;
break;
}

}
if (P!=0)
{
printf("%d is a prime number.\n", N);
}
else
{
printf("%d is not a prime number.\n", N);
}
}

return 0;
}