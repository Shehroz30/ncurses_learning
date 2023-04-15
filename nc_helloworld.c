#include <stdio.h>

int main(void) {
    char value[11];
    scanf("%10s", value);
    initscr();
    printw("%s", value);
    refresh();
    getch();
    endwin();

    return 0;
}
