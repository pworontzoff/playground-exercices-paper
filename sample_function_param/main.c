#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

void draw_los(int); // prototype de la fonction

int main()
{
    init_paper(20,20,25);

    move_to(3,2);
    draw_los(3); // appel de la fonction avec 2 comme valeur de paramètre

    move_to(10,5);
    draw_los(6); // appel de la fonction avec 5 comme valeur de paramètre

    display_paper();
    return 0;
}

// Définition de la fonction 'raw_los' avec un paramère 'size' :
void draw_los(int size) {
    
    colorize();
    
    repeat(size-1) {
        colorize();
        move_up();
        move_right();
    }
    repeat(size-1) {
        colorize();
        move_down();
        move_right();
    }
    repeat(size-1) {
        colorize();
        move_down();
        move_left();
    }
    repeat(size-1) {
        colorize();
        move_up();
        move_left();
    }
}

