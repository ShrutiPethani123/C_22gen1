#include<stdio.h>

void main()
{

    int a[5]={1,4,2,5,7};
    int n;
    printf("Enter element you want to search? ");
    scanf("%d",&n);

    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            printf("\n%d present at location %d",n,(i+1));
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Not Found!!!");
    }
}