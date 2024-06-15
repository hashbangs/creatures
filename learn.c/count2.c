#include <stdio.h>

/* count lines, tabs and blanks in input
  issue tab and blank always return 0 */

main() {
    
    int c, nl, tab, blank;

    nl = 0;
    tab = 0;
    blank = 0;
    while ((c = getchar()) != EOF)
        if (c =='\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++blank;
    printf("%d\t%d\t%d\n", nl, tab, blank);
}