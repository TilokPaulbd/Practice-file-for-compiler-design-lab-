// write a c program that count the number of white spaces in a string

#include <stdio.h>

int main(){

    char line[100];
    int i=0,space_count=0;
    printf("Enter a string = ");
    //gets(line);
    fgets(line,sizeof(line),stdin);

    while (line [i] != '\0'){
        if (line [i] ==' '){
            space_count++;
            i++;
        }else{
        i++;
        }
    }

    printf("Number of wite spaces in the string = %d\n",space_count);
    return 0;
}