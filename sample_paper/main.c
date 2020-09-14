#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(5,5,25);
    move_down();
	move_right();
	colorize();
	move_right();
    colorize();
	display_paper();
    return 0;
}

