// write a c program that will count vowel, consonant and digits.

#include<stdio.h>

int main (){

    char  line [100];
    
    int i=0,vowel_count=0,constant_count=0,digit_count=0;
    printf(" Enter a String = ");
    fgets(line ,sizeof(line),stdin);

    while(line[i] != '\0'){
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' ||
           line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U'){
            vowel_count++;
        }else if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
            constant_count++;
        }else if(line[i] >= '0' && line[i] <= '9'){
            digit_count++;
        }
        i++;
    }
    printf("Vowels = %d\n",vowel_count);
    printf("Consonants = %d\n",constant_count);
    printf("Digits = %d\n",digit_count);
}