#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//oshe ravanz
//oshada97
//ceberus labs
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\a_example.txt","r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

   fscanf(fptr,"%d", &num);

   return 0;
}
