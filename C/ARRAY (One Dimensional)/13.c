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

printf("Enter the index where you want to insert a value: ");
scanf("%d", &index);
if (index < 0 || index > n-1)
{
printf("Invalid index. Index should be between 0 and %d.\n", n-1);
}
else
{ printf("Enter the value to insert: ");
scanf("%d", &value);
for (int i = n; i > index; i--)
{
arr1[i] = arr1[i - 1];
}
arr1[index] = value;
n++;

printf("Array after inserting the value: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr1[i]);
}
}

return 0;
}