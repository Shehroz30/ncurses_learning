#include <ncurses.h>

int main(void) {
    int ch, row, col;
    initscr();
    clear();
    getmaxyx(stdscr, row, col);
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    start_color(); 
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    init_pair(2, COLOR_RED, COLOR_YELLOW);
    while (ch != KEY_F(1)) {
        ch = getch();
        switch (ch) {
            case KEY_UP:
                clear();
                attron(COLOR_PAIR(1));
                mvprintw(row/2, col/2, "Up arrow key was pressed");
                attroff(COLOR_PAIR(1));
                break;
            case KEY_DOWN:
                clear();
                attron(COLOR_PAIR(2));
                mvprintw(row/2, col/2, "Down arrow key was pressed");
                attroff(COLOR_PAIR(2));
                break;
        }
        
    }
    refresh();
    endwin();

    return 0;
}
