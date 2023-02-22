#include<stdio.h>

void main()
{
    int a[5]={10,20,30,40,50};

    printf("\n%d\n",a);

    for(int i=0;i<5;i++)
    {
        printf("%d ",&a[i]);
    }

    int *p = a;
    printf("\n%d\n",*p);
    printf("\n%d\n",*p+1);
    printf("\n%d\n",*(p+1));
    printf("\n%d\n",*(p+3));

    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n%d\n",*p+100);
    printf("\n%d\n",*(p+3)+*p+5); // 40 + 10 + 5 = 55
    printf("\n%d\n",*(p+3)+ *(p+5));

    
}