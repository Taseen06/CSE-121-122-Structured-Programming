#include <stdio.h>
int main()
{
int i,n,a[100];
printf("Input the number of elements to store in the array :");
scanf("%d",&n);

printf("Input %d number of elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index- %d : ",i);
scanf("%d",&a[i]);
}

printf("\nThe values store into the array are : \n");

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

printf("\n\nThe values store into the array in reverse are :\n");
for(i=n-1;i>=0;i--)
{
printf("%d ",a[i]);
}
return 0;
}