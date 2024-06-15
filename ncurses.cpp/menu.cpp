#include <ncurses.h>
#include <string>
using namespace std;

int main(int argc, char ** argv) {

  // NCURSES START 
  initscr();
  noecho();
  cbreak();

  int ymax, xmax;
  getmaxyx(stdscr, ymax, xmax);

  // choices inner window 
  WINDOW * menuwin = newwin(20, xmax-12, ymax-40, 5);
  box(menuwin, 0, 0);
  start_color();
  init_color(COLOR_BLUE, 0, 0, 800);
  init_color(COLOR_WHITE, 750, 750, 750);
  init_pair(1, COLOR_WHITE, COLOR_BLUE);
  init_pair(2, COLOR_BLACK, COLOR_WHITE);
  refresh();
  wrefresh(menuwin);
  wbkgd(menuwin, COLOR_PAIR(2));
  bkgd(COLOR_PAIR(1));
  refresh();

  // enables arrow keys keyboard input
  keypad(menuwin, true);

  string choices[3] = {"systemd", "openrc", "runit"};
  int choice;
  int highlight = 0;

  while(1) {
    for(int i =0; i < 3; i++) {
      if(i == highlight)
        wattron(menuwin, A_REVERSE);
      mvwprintw(menuwin, i+1, 1, "%s", choices[i].c_str());
      wattroff(menuwin, A_REVERSE);
    }
    choice = wgetch(menuwin);

    switch (choice) {
      case KEY_UP:
        highlight--;
        if(highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if(highlight == 3)
          highlight = 2;
        break;
      default:
        break;
    }
    if(choice == 10)
      break;
  }

  printw("You will go with: %s", choices[highlight].c_str());

  // make the program wait before exiting
  getch();
  endwin();
  // NCURSES ENDS

  return 0;
}
