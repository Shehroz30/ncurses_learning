#include <ncurses.h>

int main(void) {
    MEVENT event;
    int c;

    initscr();
    noecho();
    cbreak();
    mousemask(ALL_MOUSE_EVENTS, NULL);
    keypad(stdscr, true);
    mouseinterval(1);
    while (1) {
        c = getch();
        switch(c) {
            case KEY_MOUSE:
                if(getmouse(&event) == OK) {
                    if (event.bstate & BUTTON1_PRESSED) {
                        clear();
                        mvprintw(event.y, event.x, "you pressed here");
                        //printw("you pressed left clik");
                    }
                }
         break;
        }
    }
    endwin();
    return 0;
}
