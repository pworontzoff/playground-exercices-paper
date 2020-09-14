#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

void draw_los(int); //Prototype de la fonction

int main()
{
    init_paper(20,20,25);

    move_to(3,2);
    draw_los(2);

    move_to(10,5);
    draw_los(5);

	display_paper();
    return 0;
}

// Définition de la fonction
void draw_los(int size) {
    
    repeat(size) {
        colorize();
        move_up();
        move_right();
    }
    repeat(size) {
        colorize();
        move_down();
        move_right();
    }
    repeat(size) {
        colorize();
        move_down();
        move_left();
    }
    repeat(size) {
        colorize();
        move_up();
        move_left();
    }
}

