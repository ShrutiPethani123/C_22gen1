#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","r");
    char ch;

    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        while(!feof(fp))
        {
            ch=fgetc(fp);
            printf("%c\n",ch);
        }
        
    }
    fclose(fp);
}