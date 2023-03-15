#include <stdio.h>
void main()
{
    int i,size;
    int arr[]={3,4,5,6,7};
    
    size = sizeof(arr)/sizeof(arr[0]);
    printf ("the array elements are :");
    for (i=0;i<size;i++)
    printf("\narr[%d]=%d",i,arr[i]);
    
}