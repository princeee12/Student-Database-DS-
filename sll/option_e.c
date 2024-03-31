#include "header.h"
void option_e(SLL *ptr)
{
	int num;
	printf("\033[32m 1) Save and Exit\n\033[0m");
	printf("\033[31m 2) Exit without Saving\n\033[0m");
	scanf("%d",&num);

	switch(num)
	{
		case 1:stud_save(ptr);break;

		case 2:exit(0);
		default :printf("\033[31m Wrong option\n\033[0m");break;
	}

}
