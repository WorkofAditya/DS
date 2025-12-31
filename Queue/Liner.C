/*
This program use Queue to INSERT DISPLAY and DELETE values of an array
Author: Adityasinh Sodha
Date: 29th Dec 2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int queue[5] = {0}, i=0, front=-1, rear=-1, choice=0, num=0;

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

				if(rear==4)
				{
					printf("\n Queue is FULL");
				}
				else
				{
					scanf("%d",&num);
					rear=rear+1;
					if(front==-1)
					{
						front = front + 1;
					}
					queue[rear] = num;
				}
				break;

			case 2:

				if(front==-1)
				{
					printf("\n Queue is EMPTY");
				}
				else
				{
					for(i=front; i<=rear; i++)
					{
						printf("\n %d", queue[i]);
					}
				}
				break;

			case 3:

				if(front==-1)
				{
					printf("\n Queue is EMPTY");
				}
				else
				{
					num = queue[front];
					if(front == rear)
					{
						front = -1;
						rear = -1;
					}
					else
					{
						front = front + 1;
					}
					printf("\n value %d is deleted",num);

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
