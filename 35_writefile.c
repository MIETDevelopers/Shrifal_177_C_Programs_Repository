//Name: Shrifal raina
//Date: 22-3-2021
//Purpose: Program to write in file
#include <stdio.h>
#include <stdlib.h>// important to include

int main()
{
   FILE *fptr;  // declaring a file type variable.
   fptr = fopen("./txt.txt", "w"); // opening a file in write mode
   if (fptr == NULL)// condition to verify that file is opened or not
   {
      printf("Error! in opening a file ");
      exit(1);
   }
   fprintf(fptr, "hello world"); // writing in file

   fclose(fptr);

   return 0; //return statement
}
