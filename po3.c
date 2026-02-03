// write a c program that will remove white spaces from a string.

#include<stdio.h>

int main(){
char line[100],result[100];

int i=0,j=0;
printf("Enter a string = ");
fgets(line ,sizeof(line),stdin);

while (line [i] != '\0'){
  if (line[i] ==' '){
    i++;
  }else{
    result[j]=line[i];
    i++;
    j++;
  }

 }
 /*
   printf("String after removing white spaces = " );
   for(int k=0;k<j;k++)
   {
    printf("%c",result[k]);
   }
*/
   printf("The string is = %s\n",result);
   
   return 0;

}