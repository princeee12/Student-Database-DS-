#include "header.h"

void delete_all(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31m No node found \n\033[0m");
		return;
	}
	SLL *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("\033[31m All students data deleted\n\033[0m");
}
