#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i,a=0,d=0,sc=0;

printf("Enter the string :");
gets(str);

for(i=0;str[i];i++)
{
if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122) )
a++;
else if(str[i]>=48 && str[i]<=57)
d++;
else
sc++;
}
printf("\nNumber of Alphabets = %d\n",a);
printf("\nNumber of Digits = %d\n",d);
printf("\nNumber of Special characters (including spaces)= %d\n", sc);

return 0;
}