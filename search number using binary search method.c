#include<stdio.h>
int main()
{
    int c, first, last, middle, n, search, array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&array[c]);
    printf("Enter value to find\n");
    scanf("%d",&search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while( first <= last )
    {
        if ( array[middle] < search )
            first = middle + 1;
        else if ( array[middle] == search )
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", search);
    return 0;
}

Output for Binary Search:

1
2
3
4
5
6
7
8
9
10
11
12
Enter number of elements
6
Enter 6 integers
10
30
20
15
56
100
Enter value to find
33
Not found! 33 is not present in the list.
