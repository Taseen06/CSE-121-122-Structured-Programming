#include <stdio.h>
int main()
{
int arr[10], i, j, n, c = 0;

printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);

printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element of Index - %d : ",i);
scanf("%d",&arr[i]);

}

for (i = 0; i < n; i++)
{
for(j = i + 1; j < n; j++)
{
if(arr[i] == arr[j])
{
c++;
break;
}
}
}

printf("Total Number of Duplicate Elements in this Array = %d ", c);

return 0;
}