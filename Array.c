/*

1. Take one array from user Find minimum element from array.
2. Take one array from user and count all even and odd number.

    1 2 4 85 69 32 14 
    odd- 3
    even - 4

3. Take one array from user and make two extra array from odd and even number.

    1 2 3 4 5 8 7 

    odd[]- 1 3 5 7 
    even[] - 2 4 8

*/

#include<stdio.h>

void main()
{
    int a[6]={1,2,3,4,5,6};
    int odd[6],even[6];

    int m=0,n=0;

    for(int i=0;i<7;i++)
    {
        if(a[i]%2==0)
        {
            even[m]=a[i];
            m++;
        }else{
            odd[n]=a[i];
            n++;
        }
    }

    printf("\nOdd array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",odd[i]);
    }

    printf("\neven array:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",even[i]);
    }
}