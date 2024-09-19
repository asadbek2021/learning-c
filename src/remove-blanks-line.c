#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX_LINE 100000


int getArow(char s[]);
int isBlank(int);

int main() {
    char line[MAX_LINE];
    getArow(line);
    printf("%s", line);

    return 0;
}

int getArow(char s[]) {
    int c, count;

    count = 0;
    while((c = getchar()) != EOF && c != '\n') {
        if(!isBlank(c)){
            s[count] = c;
            ++count;    
        }
    }

    if(c == '\n') {
        s[count] = c;
        ++count;
    }
    s[count] = '\0';

    return count;
}

int isBlank(int p) {
    if (p == ' ' || p == '\t' || p == '\b' || p == '\n') {
        return TRUE;
    }

    return FALSE;
}
