#include <stdio.h>
#include <string.h>
int main() {
char str[100];
int v = 0, c = 0;

printf("Enter a string: ");
gets(str);

for (int i = 0; str[i] != '\0'; i++)
{
char ch =(str[i]);
if ((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
{
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
{
v++;
}
else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'u')
{
v++;
}
else
{
c++;
}
}
}

printf("Number of Vowels: %d\n", v);
printf("Number of Consonants: %d\n", c);

return 0 ;
}