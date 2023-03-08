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
out put :
enter the size of array =
5
enter the elements of array ......
 enter the 1 element
 6
 enter the 2 element3
 enter the 3 element
 3
 enter the 4 element4
 enter the 5 element
 6
 Sorted array is .....	3	3	4	6	6
