#include<stdio.h>

int isPalindrom(int n);

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int ans = isPalindrom(n);
    if(ans==1)
    {
        printf("%d is Palindrom",n);
    }else{
        printf("%d is Not Palindrom",n);
    }

}

int isPalindrom(int a)
{
    int rev=0,rem=0;
    int temp=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10 + rem;
        a=a/10;
    }

    if(rev==temp)
        return 1;
    
    return 0;

}
