#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv) {

// initializes the screen
// sets up memory and clears the screen
initscr();

int x, y;
x = y = 10;

// moves the cursor to the specified location
move(y, x);

// prints a string(const char *) to a window
printw("Hello World");

// refreshes the screen to match whats in memory
// refresh();

//what's for user input, returns int value of that key
int c = getch();
move(0, 0);

// clears the screen
clear();

move(0, 0);
printw("%d", c);
refresh();

getch();

endwin();
// deallocates memory and ends ncurses

 return 0;
}
