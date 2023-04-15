#include <ncurses.h>
#include <string.h>

int main(void) {
    char str[70];
    int row, col;

    initscr();
    noecho();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, col/2, "enter in a string ");
    getstr(str);
    mvprintw(row/3, col/3, "%s", str);
    getch();
    endwin();
    
    return 0;
}
