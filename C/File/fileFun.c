/*
fseek()
ftell()
rewind()

-> fseek(file pointer , offset , position)

position:

SEEK_SET - 0
SEEK_CUR - 1
SEEK_END - 2

-> ftell(file pointer)

-> rewind(file poiter)

*/

#include<stdio.h>

void main()
{
    FILE *fp = fopen("xyz.txt","r");

    printf("\nCurrent file pointer: %d",ftell(fp));
    fseek(fp,4,SEEK_SET);
    // fseek(fp,-5,SEEK_END);
    printf("\nCurrent file pointer: %d",ftell(fp));
    fseek(fp,3,SEEK_CUR);
    printf("\nCurrent file pointer: %d",ftell(fp));
    rewind(fp);
    printf("\nCurrent file pointer: %d\n",ftell(fp));

    char ch[20];

    if(fp==NULL)
    {
        printf("Can not open file!!");
    }else{

        while(!feof(fp))
        {
            fgets(ch,20,fp);
            printf("%s\n",ch);
        }
        
    }
    fclose(fp);
}