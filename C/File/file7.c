#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","r");
    char ch[10];

    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        while(!feof(fp))
        {
            fscanf(fp,"%s",ch);
            printf("%s\n",ch);
        }
        
    }
    fclose(fp);
}