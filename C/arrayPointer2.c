#include<stdio.h>

void main()
{
    int a[10] , b[10];
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    int *aptr = a;
    // int *aptr=&a[0];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element: ",i);
        scanf("%d",aptr+i);
    }

    printf("\nArray.....\n");

    for(int i=0;i<size;i++)
    {
        printf("%d ",*(aptr+i));
    }

    int *bptr = b;

    for(int i=0;i<size;i++)
    {
        *(bptr+i)=*(aptr+i);
    }

    printf("\nArray B .....\n");

    for(int i=0;i<size;i++)
    {
        printf("%d ",*(bptr+i));
    }

}

/*

     1 20 3 5 6 

    ptr

    *ptr - 1
    *(ptr+1)- 20


*/