#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","a");
    char name[10];
    int age;
    

    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        printf("Enter your name: ");
        gets(name);
        fputs(name,fp);
    }
    fclose(fp);
}