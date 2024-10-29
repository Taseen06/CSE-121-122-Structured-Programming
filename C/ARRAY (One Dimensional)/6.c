#include <stdio.h>
int main()
{
int arr[100],n,i,j;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);

printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index - %d : ",i);
scanf("%d",&arr[i]);
}

printf("Unique Elements in the given array are: \n");
for(i = 0; i < n; i++)
{
for (j=0; j<i; j++)
{
if (arr[i] == arr[j])
break;
}

if (i == j)
{
printf("%d ", arr[i]);
}
}

return 0;
}