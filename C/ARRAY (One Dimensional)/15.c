#include <stdio.h>
int main()
{
int arr[100],n,i,j=0,max1, max2;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index - %d : ",i);
scanf("%d",&arr[i]);
}
max1 = arr[0];
for(i=0; i<n; i++)
{

if(arr[i] > max1)
{
max2 = max1;
max1 = arr[i];
}
else if(arr[i] > max2 && arr[i] < max1)
{
max2 = arr[i];
}
}
printf("First largest = %d\n", max1);
printf("Second largest = %d", max2);
return 0;
}