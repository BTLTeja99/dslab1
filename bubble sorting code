#include <stdio.h>
int main ()
{
    int arr[20],size,i, j, temp;
    printf ("enter the size of array =");
    scanf ("%d",&size);
    printf ("enter the elements of array ......");
    for (i=0;i<size;i++)
    {
        printf ("\n enter the %d element",i+1);
        scanf("%d",&arr[i]);
        
    }
    /* Code for Buuble sort*/
    for(i=0;i<size;i++)
    {
        for (j=0;j<size-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr [j];
                arr [j]=arr[j+1];
                arr [j+1] = temp;
            }
        }
    }
    
    
    /* End of the code for Bubble sort*/
    
    printf ("\n Sorted array is .....");
    for (i=0;i<size;i++)
    printf ("\t%d",arr[i]);
    return 0;
}
