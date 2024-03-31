#include "header.h"

void stud_show(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\033[31mNo records to show\n\033[0m");
		return;
	}

	printf("\033[0;35mRollno    Name          Marks\n\033[0m");


	while(ptr)
	{
		printf("%-5d     %-10s    %-3.2f\n",ptr->rollno,ptr->name,ptr->percent);
		ptr=ptr->next;
	}
}

