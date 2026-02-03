//write a c program that will tokenize a sting using inbuilt function.

#include<stdio.h>

int main(void){
    char line [100];
    int i=0;
    
    printf("Enter a string = ");
    fgets(line ,sizeof(line),stdin);

    printf("The tokens in the string are :\n");

    while(line[i] !='\0'){
        if (line[i] == ' ' || line [i] == '\n' || line[i] == '\t'){
            printf("\n");
        }else{ 
            printf("%c",line[i]);
        }
        i++;
        
    }
    return 0;

}
