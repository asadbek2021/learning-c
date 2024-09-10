#include <stdio.h>

int main() {
    int c; /*not char because it should be able to hold big enough value like EOF*/

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
    return 0;
}
