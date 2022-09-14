#include <stdio.h>
int main()
{
    int arr[100];
    int i, item, pos, size=7;
 
    printf("Enter 7 elements: ");
    // reading array
    for (i = 0; i < size; i++)
        scanf("%d",&arr[i]);
 
    // print the original array
    printf("Array before insertion: ");
    
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // read element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    
    // read position at which element is to be inserted
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
 
    // increase the size
    size++;
 
    // shift elements forward
    for (i = size-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert item at position
    arr[pos - 1] = item;
 
    // print the updated array
    printf("Array after insertion: ");
    
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}

Output:

Enter 7 elements: 22 32 44 51 65 71 80
Array before insertion: 22 32 44 51 65 71 80 
Enter the element to be inserted: 93
Enter the position at which the element is to be inserted: 3
Array after insertion: 22 32 93 44 51 65 71 80
