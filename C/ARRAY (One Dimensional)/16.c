#include <stdio.h>
int main()
{
int arr[100],n,i,j=0,min1, min2;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index - %d : ",i);
scanf("%d",&arr[i]);
}
min1 = arr[0];
for(i=0; i<n; i++)
{
if(arr[i] < min1)
{
min2 = min1;
min1 = arr[i];
}
else if(arr[i] < min2 && arr[i] > min1)
{
min2 = arr[i];
}
}
printf("\nFirst smallest = %d\n", min1);
printf("Second smallest = %d", min2);
return 0;

}