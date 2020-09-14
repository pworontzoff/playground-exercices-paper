#ifndef PAPER_H_INCLUDED
#define PAPER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define repeat(n) _pile_repeat++;for(_cpt_repeat[_pile_repeat]=0;_cpt_repeat[_pile_repeat]<n;_cpt_repeat[_pile_repeat]++)
#define loop _pile_repeat--

int _cpt_repeat[100];
int _pile_repeat;

struct RGB {
    unsigned char red;
    unsigned char green;
    unsigned char bleue;
};

struct spaper {
    int l;
    int c;
    int nbc;
    int nbl;
    int quad_size;
	int status;
    struct RGB current_color;
    struct RGB *table;
};

struct spaper _paper;

void _init_paper(struct spaper *,int, int, int);
void _create_table(struct spaper);
void _move_down(struct spaper *);
void _move_up(struct spaper *);
void _move_left(struct spaper *);
void _move_right(struct spaper *);
void _move_to(struct spaper *, int, int);
void _colorize(struct spaper *);
void _change_color(struct spaper *work, int, int, int);
void _create_quad(char *,struct RGB ,int);

void init_paper(int, int, int);
void display_paper();
void move_down();
void move_up();
void move_left();
void move_right();
void move_to(int, int);
void colorize();
void change_color(int, int, int);

#endif // PAPER_H_INCLUDED
