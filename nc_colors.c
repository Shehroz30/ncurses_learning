#include <ncurses.h>

int main(void) {
    initscr();
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    printw("asldfkjaslfkjslfkjasdflkj");
    attroff(COLOR_PAIR(1));
    getch();
    endwin();
    return 0;
}
