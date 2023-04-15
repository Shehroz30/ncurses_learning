#include <ncurses.h>

int main(void) {
    int x, y;
    initscr();

    while (1) {
        getyx(stdscr, y, x);
        clear(); 
        mvprintw(y, x, "CURSOR");
    }
    getch();
    return 0;
}
