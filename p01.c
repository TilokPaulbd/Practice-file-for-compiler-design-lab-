//write a c program that will count length of strig

#include <stdio.h>

int main(){
    char line[100];
    
    int i=0,count=0;
    printf("Enter a string :");
    
    //gets(line);
    scanf("%[^\n]s",line);

    while(line[i] !='\0'){
        count++;
        i++;
    }

    printf("Length of string is = %d\n",count);
    return 0;
}