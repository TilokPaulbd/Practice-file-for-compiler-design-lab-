//write a c. program that will reverse a string.

#include<stdio.h>
#include<string.h>

int main(){
    char line[100],tokens[100][100];
    int i=0,j=0;
    printf("Enter a string = ");
    fgets(line,sizeof(line),stdin);

    char* token = strtok(line, " \n");

    while (token !=NULL){
        int k=0;
        while (token[k] != '\0'){
            tokens[i][k]=token[k];
            k++;

        }
        tokens[i][k]='\0';
        i++;
        token = strtok(NULL, " \n");
    }

    while (j<i){
        printf("%s\n",tokens[j]);
        j++;
    }
}
