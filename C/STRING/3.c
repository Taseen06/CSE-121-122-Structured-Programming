#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int count = 0, i;

printf("Enter the string(sentence):");
gets(str);
for (i = 0;str[i] != '\0';i++)
{
if (str[i] == ' ' && str[i+1] != ' ')
count++;
}
printf("\n\nNumber of words in given string are: %d\n", count + 1);
}