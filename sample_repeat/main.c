#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(10,10,25);
    move_right();
	repeat(5) {
        colorize();
        move_down();
        move_down();
    } loop;

    display_paper();

    return 0;
}
