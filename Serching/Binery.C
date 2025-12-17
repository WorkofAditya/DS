/*
This program search a number using Binary Search
Author: Adityasinh Sodha
Date: 17th Dec 2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10] = {0}, num=0, i=0, lower=0, upper=9, mid=0;
	clrscr();
	printf("\n Input ten numbers: ");

	// Input loop
	for(i=0; i<=9; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Input a number to search: ");
	scanf("%d",&num);

	// Process
	while(lower <= upper)
	{
		mid = (lower + upper) / 2;
		if(num == a[mid])
		{
			printf("\n Number is found");
			break;
		}

		else if(num < a[mid])
		{
			upper = mid - 1;
		}

		else
		{
			lower = mid + 1;
		}

	}

	if(lower > upper)
	{
		printf("\n Number is not found");
	}
	getch();

}

