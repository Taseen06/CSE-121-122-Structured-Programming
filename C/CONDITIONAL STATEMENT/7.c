#include <stdio.h>
#include<ctype.h>

int main() {
char ch;
printf("Enter a character: ");
scanf(" %c", &ch);

if (isalpha(ch))
{
if (ch=='A'||ch=='E'||ch =='I'||ch =='O'||ch=='U')
{
printf("%c is a vowel.\n", ch);
}
else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("%c is a vowel.\n", ch);
}
else
{
printf("%c is a consonant.\n", ch);
}
}
else
{
printf("%c is not an alphabet.\n", ch);
}
return 0;
}