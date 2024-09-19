#include <stdio.h>

#define MAX_LINE 100000
#define MIN_LINE 80

int getArow(char s[]);

int main() {
    char line[MAX_LINE];

    if(getArow(line) > 80){
        printf("%s", line);
    }

    return 0;
}

int getArow(char s[]) {
    char c;
    int count;

    count = 0;
    while((c = getchar()) != EOF && c != '\n') {
        s[count] = c;
        ++count;    
    }

    if(c == '\n') {
        s[count] = c;
        ++count;
    }
    s[count] = '\0';

    return count;
}