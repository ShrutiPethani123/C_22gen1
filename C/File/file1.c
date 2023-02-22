/*

Types of Files:

1. Text file (.txt)
2. Binary file (.bin)

Mode:

r - read
w - write
a - append

rb- read in binary
wb - write in binary
ab - append in binary

r+ -  read + write
w+ - write + read
a+ - append + read 

rb+
wb+
ab+


fopen()
fclose()
fprintf()
fscanf()
fgetc()
fputc()
fwrite()
fread()


*/

#include<stdio.h>

void main()
{
    FILE *fp;
    int n;
    fp=fopen("abc.txt","r");

    // fprintf(fp,"Java");
    // printf("Enter a no: ");
    // scanf("%d",&n);
    // fprintf(fp,"%d",n);

    // for(int i=0;i<5;i++)
    // {
    //     printf("Enter a no: ");
    //     scanf("%d",&n);
    //     fprintf(fp,"%d\t",n);

    // }

    // fscanf(fp,"%d",&n);
    // printf("%d \n",n);

    
    fscanf(fp,"%d",&n);
    printf("%d \n",n);
       

   


    fclose(fp);

}