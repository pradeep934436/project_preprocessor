#include"header.h"
int main(int argc,char **argv)
{
    if(argc!=3)
    {
        printf("Usage: ./a.out inputfilename outputfilename\n");
        return 1;
    }
    FILE *fp=fopen(argv[1],"r");
     FILE *fs=fopen(argv[2],"w");
     if(fp==0)
     {
         printf("File not present\n");
         return 1;
     }
     process_file(fp,fs);
     return 0;
 }