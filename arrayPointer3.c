// 3. Make one function for input the array and print the array

// -> inputArray(array,size)
// -> printArray(array,size)

#include<stdio.h>

void inputArray(int *arr,int s)
{

    for(int i=0;i<s;i++)
    {
        printf("Enter %d element: ",i);
        scanf("%d",arr+i);
    }

}

void printArray(int *arr,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void main()
{ 
    int a[10];
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    int *aptr=a;

    inputArray(aptr,size);

    printf("\nArray is: \n");

    printArray(aptr,size);

}