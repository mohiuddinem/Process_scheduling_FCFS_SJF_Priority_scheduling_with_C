#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int size = 5;
    int arr[100]={6,7,4,56,2};
    int i, j, temp;
    int n = sizeof(arr);
    printf("size: %d",n);

    

    for(i=0; i<size; i++)
    {
        
        for(j=i+1; j<size; j++)
        {
            
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}