#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words and characters in input */

main() {
    
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        /*if c is a blank or c is a newline or c is a tab*/
        if (c == ' ' || c == '\n' || c == '\t') 
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf(" %d\n%d\n%d\n", nl, nw, nc);
}