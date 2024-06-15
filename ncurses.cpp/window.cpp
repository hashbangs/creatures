#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv) {

  initscr();
  cbreak(); // by default exits ncurses 
  raw(); // don't take input for commands inside ncurses like CTRL-C
  noecho(); // do not output keyboard inputs
  
  int height, width, start_y, start_x;
  height = 10;
  width = 20;
  start_x = start_y = 10;

  WINDOW * win = newwin(height, width, start_y, start_x);
  // a pointer to a new window. by default it's a null pointer
  refresh();

  
  box(win, 0, 0); // you can give any int values for border skins
  // wborder (win, left, right, top, bottom, tlc, trc, blc, brc);
  // customize each border and corners 
  mvwprintw(win, 1, 1, "this is my box");
  wrefresh(win);

  int c = getch();

  endwin();


  return 0;
}
