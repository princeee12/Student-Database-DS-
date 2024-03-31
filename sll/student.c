#include "header.h"

void main()
{
	char  op;
	SLL *headptr=0;
	read_file(&headptr);
	while(1)
	{

		printf("\n\033[036m---------------------------------------------\n");
		printf("|       *****STUDENT RECORD MENU*****       |\n");
		printf("|                                           |\n");
		printf("|       a/A  :add new record                |\n");
		printf("|       d/D  :delete a record               |\n");
		printf("|       s/s  :show the list                 |\n");
		printf("|       m/M  :modify a  record              |\n");
		printf("|       v/V  :save                          |\n");
		printf("|       e/E  :exit                          |\n");
		printf("|       t/T  :sort the list                 |\n");
		printf("|       l/L  :delete all  the records       |\n");
		printf("|       r/R  :reverse the list              |\n");
		printf("|       Enter your choice:                  |  ");
		printf("\n---------------------------------------------\n\033[0m");

		scanf(" %c",&op);
		switch(op)
		{       case 'A':
			case 'a':stud_add(&headptr);break;
			case 'D':
			case 'd':stud_del(&headptr);break;
			case 'S':
			case 's':stud_show(headptr);break;
			case 'M':
			case 'm':stud_mod(&headptr);break;
			case 'V':
			case 'v':stud_save(headptr);break;
			case 'T':
			case 't':option_t(headptr);break;
			case 'E':
			case 'e':option_e(headptr);exit(0);
			case 'L':
			case 'l':delete_all(&headptr);break;
			case 'R':
			case 'r':reverse_link(&headptr);break;
			default :printf("\033[031m Wrong choice selected\n\033[0m");
		}

	}
}

