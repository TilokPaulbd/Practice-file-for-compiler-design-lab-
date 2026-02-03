//write a c program that will tokenize a sting and save in different array without using inbuilt function.

#include<stdio.h>
int main(){
    char line [100],tokens[10][100];
    int i=0,k=0,j=0,tokenNo=0;

    printf("Enter a string =");
    fgets(line ,sizeof(line),stdin);

    while (line [i] != '\0'){
        if (line[i] == ' ' || line [i] == '\n' || line[i] == '\t'){
            tokens[tokenNo][j]='\0';
            tokenNo++;
            j=0;
        }else{
            tokens[tokenNo][j]=line[i];
            j++;
        }
        i++;
    }
    tokens[tokenNo][j]='\0';


    printf("The tokens in the string are :\n");
    while(k<=tokenNo){
        printf("%s\n",tokens[k]);
        k++;
    }

   return 0;
}

