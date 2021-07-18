# c-programming
#include <stdio.h>
#include <string.h>
main() 
 {
   FILE*fp;
   char filename[20], str[100];
  printf("\n Enter the filename:");
  fp=fopen(filename,"w");
  if(fp==NULL)
  {
      printf("\n Error Opening The File");
      exit(1);
  }
    printf("\nEnter the text:");
    gets(str);
    fflush(stdin);
    fprintf(fp,"%s",str);
    fclose(fp);
 }
   
  
