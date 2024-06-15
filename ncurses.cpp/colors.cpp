#include <ncurses.h>
using namespace std; 
// void start_ncurses(bool useRaw, bool useNoecho);

int main(int argc, char ** argv) {

 // NCURSES START 
 // start_ncurses(true, true);
 initscr();
 use_default_colors();
  if(!has_colors()) {
    printw("Terminal does not support color");
    getch();
    return -1;
  }
  start_color();

  /*
   * COLOR_PAIR(n)
   * COLOR_BLACK
   * COLOR_RED
   * COLOR_GREEN
   * COLOR_YELLOW
   * COLOR_BLUE
   * COLOR_MAGENTA
   * COLOR_CYAN
   * COLOR_WHITE
   * */

  init_pair(1, COLOR_CYAN, COLOR_WHITE);
  init_pair(2, COLOR_RED, COLOR_GREEN);

  /*
   * A_NORMAL
   * A_STANDOUT
   * A_REVERSE
   * A_BLINK
   * A_DIM
   * A_BOLD
   * A_PROTECT
   * A_INVIS
   * A_ALTCHARSET
   * A_CHARTEXT
   * */

  attron(COLOR_PAIR(1));
  printw("This is some text\n");
  attroff(COLOR_PAIR(1));

  attron(COLOR_PAIR(2));
  printw("This should be green and red");
  attroff(COLOR_PAIR(2));

  getch();

  endwin();

  // NCURSES END
}

