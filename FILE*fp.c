# c-programming
#include <stdio.h>
#include <conio.h>
int main() 
 {
   FILE*fp;
     typedef struct student
     {
         int roll_no;
         char name[80];
         float fees;
         char DOB[80];
     } STUDENT;
     STUDENT stud1;
     clrscr();
    fp=fopen("student_details.dat","r");
     if(fp==NULL)
     {
     printf("\n File opening Error");
     return 0;
     }
     //READ FROM FILE
     fscanf(fp,"%d %s %f %s",&stud1.roll_no,stud1.name,&stud1.fees,stud1.DOB);
     //PRINT ON SCREEN
    printf("\n***STUDENT'S DETAILS***");
    printf("\n ROLL No.=%d",stud1.roll_no);
    printf("\n NAME=%s",stud1.name);
    printf("\n FEES=%f",stud1.fees);
    printf("\n DOB=%s",stud1.DOB);
     fclose(fp);
     getch();
     return 0;
 }
  
