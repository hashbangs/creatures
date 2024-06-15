#include <ncurses.h>
#include <string>
using namespace std;

int main(int argc, char ** argw) {

  // NCURSES START 
  initscr();
  noecho();
  cbreak();

  int y, x, ybeg, xbeg, ymax, xmax;

  WINDOW * win = newwin(10, 20, 10 ,10);

  getyx(stdscr, y, x);    // gets the current cursor position in the specified window
  getbegyx(win, ybeg, xbeg ); // gets top left corner coordinates
  getmaxyx(stdscr, ymax, xmax); // gets the height/width of the window

  mvprintw(ymax/2, xmax/2, "hello\t");

  printw("%d %d %d %d %d %d", y, x, ybeg, xbeg, ymax, xmax);

  // make the program wait before exiting
  getch();
  endwin();
  // NCURSES ENDS

  return 0;
}
