#include <ncurses.h>
int main()
{
    initscr();
    printw("Press Any Key To Exit...");
    getch();
    endwin();
}
