#include <stdio.h>
void  main()
{
    int arr [10],i,n,key,j;
    //code for intersection sort
    printf ("enter the size of array");
    scanf ("%d ",&n);
    printf ("enter the array......");
    for (i=0;i<n;i++)
    {
        printf("\n enter the %d elements = ",i+1);
        scanf ("%d",&arr[i]);
        
    }
   for (i=0;i<n;i++)
    { 
        key = arr[i];
        j=i-1;
    
      while (key <arr[j]&&j>=0)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr [j+1]=key;
   }
        printf("\n intersection  array is ......");
    for (j=0;j<n;j++)
    printf ("\t%d",arr[j]);

      }
