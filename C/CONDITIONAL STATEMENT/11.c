#include <stdio.h>
#include<ctype.h>
int main()
{

char ch;
printf("Enter a character: ");
scanf(" %c", &ch);

if (isalpha(ch))
{

if (isupper(ch))
{
printf("%c is a Capital letter\n", ch);
ch = tolower(ch);
printf("Converted to lowercase: %c\n", ch);

}
else
{
printf("%c is a Small letter\n", ch);
ch = toupper(ch);
printf("Converted to uppercase: %c\n", ch);
}
}
else
{
printf("%c is not an alphabet.\n", ch);
}

return 0;
}