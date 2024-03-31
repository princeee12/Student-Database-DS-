#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
	int rollno;
	char name[20];
	float percent;
	struct student *next;
}SLL;

void stud_add(SLL **);
void stud_del(SLL **);
void stud_show(SLL *);
void stud_mod(SLL **);
void stud_save(SLL *);



void del_rollno(SLL **);
void del_name(SLL **);


void mod_rollno(SLL **);
void mod_name(SLL **);
void mod_marks(SLL **);

void read_file(SLL **);

void option_e(SLL *);
void option_t(SLL *);

void delete_all(SLL **);
void reverse_link(SLL **);

int count_node(SLL *);
void sort_nodename(SLL *);
void sort_nodepercent(SLL *);
void sort_noderollno(SLL *);
