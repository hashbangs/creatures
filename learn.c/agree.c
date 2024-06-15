#include <stdio.h>

int main() {

    char c;
    int i = 0;

    printf("Do you wish to install this shady program ? (Y / N)\n");  

    while (i < 3) {   
        scanf(" %c", &c);  
        if (c == 'y' || c == 'Y') {
            printf("Trust me bro\n");
            i+= 3;
        }
        else if (c == 'n' || c == 'N') {
            printf(":sad:\n");
            i+= 3;
        }
        else {
            printf("Sorry, try again\n");
            i++;
        }
    }
} 
