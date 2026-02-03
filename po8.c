//write a program that will count number of lines in a string.

#include <stdio.h>

int main(void) {
    char line[100];
    int line_count = 0;

    printf("Enter lines :\n");

    while (fgets(line, sizeof line, stdin) != NULL) {
        line_count++;
    }

    printf("Number of lines = %d\n", line_count);
    return 0;
}