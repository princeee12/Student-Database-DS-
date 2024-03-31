#include "header.h"
void read_file(SLL **ptr)
{
	if(ptr==0)
	{
		printf("No node found\n");
		return;
	}
	FILE *fp=fopen("student.dat","r");

	while(1)
	{
		SLL *new=malloc(sizeof(SLL)),*last;
		if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percent)== -1)
			break;
		new->next=0;
		if(*ptr==0)
			*ptr=new;

		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next = new;
		}
	}
	fclose(fp);
}
