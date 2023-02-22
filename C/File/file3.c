#include<string.h>
#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","a");
    char name[10];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    int length = strlen(name);
    int i;
    


    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        for(i=0;i<length;i++)
        {
            printf("Character put in file: %c\n",name[i]);
            fputc(name[i],fp);
        }

        
    }
    fclose(fp);
}