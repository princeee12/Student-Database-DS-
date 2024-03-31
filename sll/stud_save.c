#include "header.h"
void stud_save(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No node found\n");
		return;
	}
	FILE *fp;
	fp=fopen("student.dat","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percent);
		ptr=ptr->next;
	}
       
	printf("\033[0;32;5mAll nodes saved\033[0m\n");
	fclose(fp);
}
