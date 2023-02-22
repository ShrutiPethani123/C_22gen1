#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void factorial1(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial is: %d",fact);
}

int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}



void main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    // int ans = factorial(a);
    // printf("Factorial of %d is %d",a,ans);

    // printf("Factorial of %d is %d",a,factorial(a));
    // factorial1(a);

    int value=isPrime(a);

    if(value==1)
    {
        printf("Prime..");
    }else{
        printf("Not prime..");
    }


    
}

/*
-> Take two values from user and find maximum among two using function. (with arg with r.t)
-> check number is prime or not prime using function.
-> check number is palindrom or not using function.

    isPalindrom()
    -> return 1 if palindrom
    -> return 0 if not palindrom

-> Take two number from user and swap that number using function











*/