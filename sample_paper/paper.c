#include "paper.h"

void init_paper(int nbl, int nbc, int size) {
    _init_paper(&_paper,nbl,nbc,size);
}
void display_paper() {
    _create_table(_paper);
}
void move_down() {
    _move_down(&_paper);
}
void move_up() {
    _move_up(&_paper);
}
void move_left() {
    _move_left(&_paper);
}
void move_right() {
    _move_right(&_paper);
}
void move_to(int l, int c) {
    _move_to(&_paper,l,c);
}
void colorize() {
    _colorize(&_paper);
}
void change_color(int red, int green, int bleue) {
    _change_color(&_paper,red,green,bleue);
}

void _change_color(struct spaper *work, int red, int green, int bleue) {
    work->current_color.red=red;
    work->current_color.green=green;
    work->current_color.bleue=bleue;
}

void _move_to(struct spaper *work, int l, int c) {
    work->c=c;
    work->l=l;
}

void _move_right(struct spaper *work) {
    work->c++;
}

void _move_left(struct spaper *work) {
    work->c--;
}

void _move_down(struct spaper *work) {
    work->l++;
}

void _move_up(struct spaper *work) {
    work->l--;
}

void _init_paper(struct spaper *paper,int nbl, int nbc, int size) {
    int i,j;
    struct RGB *dummy;

    paper->nbl=nbl;
    paper->nbc=nbc;
    paper->quad_size=size;
    paper->c=0;
    paper->l=0;
    paper->current_color.red=0;
    paper->current_color.green=0;
    paper->current_color.bleue=255;
    dummy = (struct RGB*)malloc(sizeof(struct RGB)*nbl*nbc);
    for (i=0;i<nbl;i++) {
        for (j=0;j<nbc;j++) {
            (dummy+i*nbc+j)->red=255;
            (dummy+i*nbc+j)->green=255;
            (dummy+i*nbc+j)->bleue=255;
        }
    }
    paper->table=dummy;
	paper->status=0;
}

void _colorize(struct spaper *work) {
    if (work->c>=0 && work->l>=0 && work->c<work->nbc && work->l<work->nbl)
        *(work->table+work->l*work->nbc+work->c)=work->current_color;
    else {
        printf("TECHIO> message --channel \"Error\" OPERATION OUT OF RANGE PAPER[%d][%d]\n",work->l,work->c);
		work->status=1;
	}
}

void _create_table(struct spaper work) {
    int i,j;
    FILE *fp;
    char buffer[500];

    fp = fopen("output.html","wt");
    fputs("<table border=1 style='border-collapse: collapse;'>",fp);
    for (i=0;i<work.nbl;i++) {
      sprintf(buffer,"<tr style='height:%dpx;'>",work.quad_size);
      fputs(buffer,fp);
      for (j=0;j<work.nbc;j++) {
        _create_quad(buffer,*(work.table+i*work.nbc+j),work.quad_size);
        fputs(buffer,fp);
      }
      fputs("</tr>",fp);
    }
    fputs("</table>",fp);
    fclose(fp);
	if (work.status==1) printf("TECHIO> success false\n");
}

void _create_quad(char *buffer,struct RGB color,int dim) {
    sprintf(buffer,"<td style='width:%dpx; background-color:rgb(%d,%d,%d);'></td>",dim,color.red,color.green,color.bleue);
}
