#include <stdio.h>
#include <string.h>
int main()
{
char Str1[100], Str2[100];
int i;

printf("\n Please Enter the First String :");
gets(Str1);

printf("\n Please Enter the Second String :");
gets(Str2);

for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);

if(Str1[i] < Str2[i])
{
printf("\nString 1 is Less than String 2\n\n");
}
else if(Str1[i] > Str2[i])
{
printf("\nString 2 is Less than String 1\n\n");
}
else
{
printf("\nString 1 is Equal to String 2\n\n");
}

return 0;
}