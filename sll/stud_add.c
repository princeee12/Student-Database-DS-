#include "header.h"

void stud_add(SLL **ptr) {

	SLL *new = malloc(sizeof(SLL));

	if(new == 0){

		printf("\033[31mMemory allocation failed\n\033[0m");

		return;
	}

	printf("\033[32m Enter name: \033[0m");

	scanf(" %s", new->name);

	printf("\n\033[32m Enter mark: \033[0m");

	scanf(" %f", &new->percent);

	new -> next = 0;

	int roll_no = 1;

	SLL *temp = *ptr;

	SLL *prev = 0;

	while(temp != 0) {

		if(temp -> rollno != roll_no){

			break;	
		}

		roll_no++;

		prev = temp;

		temp = temp -> next;

	}

	new -> rollno = roll_no;

	if(prev == 0){

		new -> next = *ptr;

		*ptr = new;

	} 

	else{

		new -> next = prev -> next;

		prev -> next = new;
	}
}

/*void stud_add(SLL **ptr)
{
	int least=1,flag;
	SLL *node=*ptr;


	while (node) {
		if (node->rollno == least)  
			least++;
		else 
			break;
		node = node->next;
	}


	SLL *new=malloc(sizeof(SLL)),*last;
	printf("Enter the name and percentage\n");
	new->rollno=least;
	scanf(" %s %f",new->name,&new->percent);
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
*/
