#include <stdio.h>

void main()
{

    int b[6], idx;
    for (int i = 0; i < 6; i++)
    {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    printf("\n Array: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n Enter the index which you want to delete:");
    scanf("%d", &idx);

    if (idx < 0 || idx > 6)
    {
        printf("Please Enter Valid Index...");
    }
    else
    {

        for (int i = idx; i < 5; i++)
        {
            b[i] = b[i + 1];
        }

        printf("\nArray After Deletion: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", b[i]);
        }
    }
}

/*

1. Take one array from user and print array and count all even and odd numbers.
2. Print all negative numbers from array.

1 5 7 -4 -3 7 8 -2

-> -4 -3 -2

3. print sum of all array element.

1 2 3 4 5
sum= 15

4. take one array from user and count frquency of user given eleement.

2 3 5 6 8 3 9 2 9

n = 5
count : 1

n= 9
count:2

5. Take one array from user and  search element from array.

3 4 5 6 1 3 5

ele - 5
found at location 3

ele - 11
not found

6. Take 2 array from user and print sum of two array.

a - 2 3 5 6 7
b - 2 4 7 1 3

c = 4 7 12 7 10

7. Take one array from user and delete particular index element.

a - 1 4 5 7 4 3 1
ind - 2

a- 1 4 7 4 3 1


8. Take one array from user and also take index and element to insert element in array.

a - 5 3 4 8 6 3 1 (7)

index = 2
elem = 15

a - 5 3 15 4 8 6 3 1 (8)

9. Take one array from user and count how many duplicates are present in array.

a - 1 1 2 2 5 5 8 9 8 1 8

      1   2   5     8  1 8

total duplicate  -  6


for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(a[j]==a[i])
        {
            count++;
            break;
        }
    }
}


10. Take one array from user and print reverse array and store reverse into another array.

 a - 4 5 8 1 2
 b - 2 1 8 5 4 

11. Take one array from user and reverse array without any extra array.

a - 5 8 6 4 1
a - 1 4 6 8 5

12. Take one array from user and find maximum element from array.

    a - 4 5 9 7 85 1 2 63 45
    max= 85

    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    printf(max)

13. left shift of array.

    a - 1 2 3 4 5

    count=2
    2 3 4 5 1
    3 4 5 1 2 








*/