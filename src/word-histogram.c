#include <stdio.h>

#define IN 1
#define OUT 0

#define TRUE 1
#define FALSE 0

#define MAXLENGTH 100

int isBlank(int p) {
    if (p == ' ' || p == '\t' || p == '\b' || p == '\n') {
        return TRUE;
    }

    return FALSE;
}

int main() {
    int c, i, j, state, wlength, wcount;
    int hMap[MAXLENGTH];

    state = OUT;
    wlength = wcount = 0;

    for (i = 0; i < MAXLENGTH; i++) {
        hMap[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if(isBlank(c)) {
            state = OUT;
            if (wlength > 0 && wlength < MAXLENGTH) {
                hMap[wcount] = wlength;
            }
            wcount++;
            wlength = 0;
        }
        else {
            state = IN;
            ++wlength;
        }
    }


    for (i = 0; i < wcount; i++ ) {
        for (j = 0; j < hMap[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    
}
