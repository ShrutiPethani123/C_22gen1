/*

1. 
Take one array from user and print that array.

row - 3
col - 2

1 2 3 4 5 6

output:
1 2 3
4 5 6

2. Take one 2D array from user and print sum of primary and secondary diagonal.

array - n*n 

3 4 5 
6 2 1 
7 6 4

PD -  3 2 4 -> sum = 10
SD -  5 2 7 -> sum = 14


*/

#include<stdio.h>

void main()
{
    int a[10][10];
    int row,col;
    int psum =0 , ssum=0;

    printf("\nEnter rows:");
    scanf("%d",&row);
    printf("\nEnter cols:");
    scanf("%d",&col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nArray....\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                psum=psum+a[i][j];
            }

            if(i==row-j-1)
            {
                ssum=ssum+a[i][j];
            }
            
        }
        
    }

    printf("\nPrimary Diagonal sum is %d",psum);
    printf("\nSecondary Diagonal sum is %d",ssum);

    
}

/*
   0 1 2
0 -1 4 6
1 -4 7 8
2 -1 9 4
n*n

PD - 1 7 4 ( i=j)

SD - 6 7 1 (i+j = n-1) -> i=n-j-1

6 - 02
7 - 11
1 - 20


*/