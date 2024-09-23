#include <stdio.h>

#define MAXLINE 1000

void reverse(char[], char[], int);

int main() {
    int c, count;
    char line[MAXLINE];
    char output[MAXLINE];

    count = 0;
    while ((c = getchar()) != EOF) {
        line[count] = c;
        ++count;
    }
    
    reverse(line, output, count - 1);

    printf("\n %s \n", output);

    return 0;
}

void reverse(char input[],char output[], int index) {
    int i;
    for (i = 0; index >= 0; index--) {
        output[index] = input[i];
        i++;
    }
}
