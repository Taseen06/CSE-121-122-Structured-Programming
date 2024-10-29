#include <stdio.h>
int main()
{
int arr1[100], n, index, value, i;
printf("Input the number of elements to be stored in the array :");

scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index - %d : ",i);
scanf("%d",&arr1[i]);
}

printf("\nEnter the index where you want to delete a value: ");
scanf("%d", &index);
if (index < 0 || index > n-1)
{
printf("\nInvalid index. Index should be between 0 and %d.\n", n-1);
}
else
{
arr1[index] = 0;
printf("\nArray after deleting the value: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr1[i]);
}
printf("\n\n ");
}

return 0;
}