/*

fopen()
fclose()
fprintf()
fscanf()
fgetc()
fputc()
fgets()
fputs()
fwrite()
fread()



*/

#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","a");
    char name[10];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);


    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        // fprintf(fp,"Hello Good Morning");
        fprintf(fp,"%s\t%d\n",name,age);
    }
    fclose(fp);
}