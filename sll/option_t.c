#include "header.h"
void option_t(SLL *ptr)
{
	int op;
	printf("1)Sort with name\n");

	printf("2)Sort with percentage\n");

	scanf("%d",&op);

	switch(op)
	{
		case 1:sort_nodename(ptr);break;
		case 2:sort_nodepercent(ptr);break;
		default:printf("wrong choice\n");break;
	}
}
void sort_nodename(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\033[31m No node found\n\033[0m");
		return;
	}

	SLL *p1=ptr,*p2,t;
	int i,j,c=count_node(ptr);

	for(i=0;i<c-1;i++)
	{       
		p2=p1->next;

		for(j=0;j<c-i-1;j++)
		{
			if(strcmp(p1->name,p2->name) > 0)
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

void sort_nodepercent(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No node found\n");
		return;
	}

	SLL *p1=ptr,*p2,t;
	int i,j,c=count_node(ptr);

	for(i=0;i<c-1;i++)
	{       
		p2=p1->next;

		for(j=0;j<c-i-1;j++)
		{
			if(p1->percent > p2->percent)
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

