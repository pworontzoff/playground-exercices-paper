#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

void draw_bird(); //Prototype de la fonction

int main()
{
    init_paper(20,20,25);

    move_to(3,2);
    draw_bird();

    move_to(10,10);
    draw_bird();

    move_to(17,7);
    draw_bird();

    move_to(7,16);
    draw_bird();

	display_paper();
    return 0;
}

// Définition de la fonction
void draw_bird() {
    colorize();
    move_down();
    move_right();
    colorize();
    move_up();
    move_right();
    colorize();
    move_left();
    move_left();
}


