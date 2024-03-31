#include "header.h"
void stud_save(SLL *ptr)
{
	if(ptr==0)
	{

		FILE *fp=fopen("student.dat","w");
		return;
	}

	sort_noderollno(ptr);
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

void sort_noderollno(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No record found\n");
		return;
	}
	SLL *p1=ptr,*p2,t;
	int i,j,c=count_node(ptr);

	for(i=0;i<c-1;i++)
	{
		p2=p1->next;

		for(j=0;j<c-i-1;j++)
		{
			if(p1->rollno > p2->rollno)
			{
				t.rollno=p2->rollno;
				strcpy(t.name,p2->name);
				t.percent=p2->percent;
				p2->rollno=p1->rollno;
				strcpy(p2->name,p1->name);
				p2->percent=p1->percent;
				p1->rollno =t.rollno;
				strcpy(p1->name,t.name);
				p1->percent=t.percent;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}

}
