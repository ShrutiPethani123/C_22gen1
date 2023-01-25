#include<stdio.h>

void main()
{
    int b[10], idx , n;
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

    printf("Enter index: ");
    scanf("%d",&idx);

    printf("Enter element: ");
    scanf("%d",&n);

    for(int i=6;i>=idx;i--)
    {
        b[i+1]=b[i];
    }
    b[idx]=n;

    printf("\n Array: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", b[i]);
    }


}
