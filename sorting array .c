#include <stdio.h>
void main()
{
    int arr[10],i,n;
    printf ("enter the size of array");
    scanf ("%d ",&n);
    printf ("enter the array......");
    for (i=0;i<n;i++)
    {
        printf("\n enter the %d elements = ",i+1);
        scanf ("%d",&arr[i]);
        
    }
  
   
} printf("\n sorted array is ......");
    for (i=0;i<n;i++)
    printf ("\t%d",arr[i]);
