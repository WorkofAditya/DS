/*
This program use stack to INSERT DISPLAY and DELETE values of an array
Author: Adityasinh Sodha
Date: 22th Dec 2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int stack[5] = {0}, i=0, top=-1, choice=0, num=0;

	while(choice != 4)
	{
		clrscr();
		printf("\n 1. Insert");
		printf("\n 2. Display");
		printf("\n 3. Delete");
		printf("\n 4. Exit");
		printf("\n input your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{

			case 1:

				if(top==4)
				{
					printf("\n Stack is FULL");
				}
				else
				{
					printf("\n Input a value: ");
					scanf("%d",&num);
					top = top + 1;
					stack[top] = num;
				}
				break;

			case 2:

				if(top==-1)
				{
					printf("\n Stack is EMPTY");
				}
				else
				{
					for(i=top; i>=0; i--)
					{
						printf("\n %d", stack[i]);
					}
				}
				break;

			case 3:

				if(top==-1)
				{
					printf("\n Stack is EMPTY");
				}
				else
				{
					num = stack[top];
					top = top-1;
					printf("\n %d is DELETED",num);
				}
				break;

			case 4:
				break;
			default:
				printf("\n Invalid choice");
		}
		getch();
	}

}











