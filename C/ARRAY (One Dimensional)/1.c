#include <stdio.h>
int main()
{
int a[5],i;

printf("Input 5 elements in the array :\n");
for(i=0; i<5; i++)
{
printf("Element of Index - %d : ",i);
scanf("%d", &a[i]);
}

printf("\nElements in array are: ");
for(i=0; i<5; i++)
{
printf("%d ", a[i]);
}
return 0;
}