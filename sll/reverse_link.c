#include "header.h"
void reverse_link(SLL **ptr)
{

	if(*ptr==0)
	{
		printf("\033[31m No nodes found\n\033[0m");
		return;
	}

	int c=count_node(*ptr),i=0;
	if(c>1)
	{
		SLL **p,*t=*ptr;
		p=malloc(sizeof(SLL*)*c);
		while(t)
		{
			p[i++]=t;
			t=t->next;
		}
		for(i=1;i<c;i++)
			p[i]->next=p[i-1];
		p[0]->next=0;
		*ptr=p[c-1];

	}
	printf("\033[32m All records reversed\n\033[0m");
}

int count_node(SLL *ptr)
{

	int count=0;
	while(ptr)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

