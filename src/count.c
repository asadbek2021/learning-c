#include <stdio.h>

int main() {
    int c;
    float nl, t, b;

    nl = t = b = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++t;
        }
        if (c == ' ') {
            ++b;
        }
    }   
    printf("\nNew Lines: %.0f\n", nl);
    printf("Blanks: %.0f\n", b);
    printf("Tabs: %.0f\n", t);

    return 0;
}
