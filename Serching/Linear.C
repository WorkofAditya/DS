/*
This program serach a number from a unsorted string
Author: Adityasinh Sodha
Date: 15th Dec 2025
*/
#include<stdio.h>
#include<conio.h>

void main()

{

	int a[5] = {0}, i=0, num=0;
	clrscr();

	// Input loop
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n input a number to search: ");
	scanf("%d",&num);
	
	// loop of searching 
	for(i=0; i<=4; i++)
	{
		if(a[i]==num)
		{
			printf("\n %d is found",num);
			break;
		}

	}

	if(a[i]!=num)
	{
		printf("\n %d is not found",num);
	}

	getch();

}
