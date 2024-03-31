#include "header.h"

void modd_rollno(SLL **);
void stud_mod(SLL **ptr)
{
	int num;
	printf("Which record to modify\n");
	printf("\033[32m 1)rollno 2)name 3)marks\n\033[0m");
	scanf("%d",&num);
	switch(num)
	{
		case 1:mod_rollno(ptr);break;
		case 2:mod_name(ptr);break;
		case 3:mod_marks(ptr);break;
		default:printf("\033[0;31mWrong option selected\n\033[0m");
	}
}

void mod_rollno(SLL **ptr)
{
	int rollno,flag=0;
	SLL *node=*ptr;
	printf("Enter the roll number\n");
	scanf("%d",&rollno);

	while(node)
	{
		if(node->rollno == rollno)
		{
			printf("%d %s %f\n",node->rollno,node->name,node->percent);
			flag=1;
			break;
		}
		node = node->next;

	}

	if(flag == 1)
	{
		printf("\033[32m Enter the name and marks\n\033[0m");
		scanf("%s %f",node->name,&node->percent);
	}
	if(flag == 0)
		printf("\033[0;31mNo node found\033[0m\n");

}


void mod_name(SLL **ptr)
{
	SLL *node=*ptr;
	int flag=0,rollno;
	char s[20];
	printf("Enter the name\n");
	scanf("%s",s);
	while(node)
	{
		if(strcmp(node->name,s)==0)
		{
			printf("%d %s %f\n",node->rollno,node->name,node->percent);
			flag++;
		}
		node=node->next;
	}
	node=*ptr;

	if(flag == 0)
		printf("\033[0;31mNo node found\033[0m\n");

	if(flag == 1)
	{
		while(node)
		{
			if(strcmp(node->name,s)==0)
			{
				break;
			}
			node=node->next;
		}
		printf("Enter the name and marks\n");
		scanf("%s %f",node->name,&node->percent);

	}

	if(flag > 1)
		mod_rollno(&node);
}


void mod_marks(SLL **ptr)
{
	SLL *node=*ptr;
	int flag=0;
	float mark;

	printf("Enter the mark\n");
	scanf("%f",&mark);
	while(node)
	{
		if(node->percent == mark)
		{
			printf("%d %s %f\n",node->rollno,node->name,node->percent);
			flag++;
		}
		node=node->next;
	}
	node=*ptr;

	if(flag == 0)
		printf("\033[0;31mNo node found\033[0m\n");

	if(flag == 1)
	{
		while(node)
		{
			if(node->percent == mark)
			{
				break;
			}
			node=node->next;
		}
		printf("Enter the name and marks\n");
		scanf("%s %f",node->name,&node->percent);

	}

	if(flag > 1)
		mod_rollno(&node);
}


