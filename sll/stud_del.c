#include "header.h"

void stud_del(SLL **ptr)
{
	SLL *head =*ptr;
	char opp;
	printf("R/r:enter roll to del\n");
	printf("N/n:enter name to del\n");
	scanf(" %c",&opp);
	switch(opp)
	{ 
		case 'R':
		case 'r':del_rollno(ptr);break;
		case 'N':
		case 'n':del_name(ptr);break;
	}
}

void del_rollno(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\033[031m No records found\n\033[0m");
		return;
	}

	SLL *del=*ptr,*prev;
	int rollno;

	printf("Enter the rollno to delete\n");
	scanf("%d",&rollno);

	while(del)
	{
		if(del->rollno == rollno)
		{
			if(del == *ptr)
				*ptr=del->next;
			else
				prev->next = del ->next;

			printf("\033[031mNode deleted\n\033[0m");
			free(del);
			return;
		}
		prev=del;
		del=del->next;
	}
}


void del_name(SLL **ptr)
{

	if(*ptr==0)
	{
		printf("\033[031m No records found\n\033[0m");
		return;
	}

	SLL *del=*ptr,*prev;
	char name[20];
	scanf(" %s",name);

	int flag=0;
	while(del)
	{
		if(strcmp(del->name,name)==0)
		{
			printf("%d %s %f\n",del->rollno,del->name,del->percent);
			flag++;
		}
		del=del->next;
	}

	del=*ptr;

	if(flag == 1)
	{
		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				if(del == *ptr)
					*ptr=del->next;
				else
					prev->next = del ->next;
				printf("\033[031mNode deleted\n\033[0m");

				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
	}

	if(flag > 1)
		del_rollno(&del);
}
