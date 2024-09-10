#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isBlank(int p) {
        if (p == ' ' || p == '\t' || p == '\b' || p == '\n') {
            return TRUE;
        }
        return FALSE;
}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (isBlank(c)) {
            putchar('\n');
            while (isBlank(c = getchar()) && c != EOF)
                ;
            putchar(c);
        }
        else {
            putchar(c);
        }
    }
} 


