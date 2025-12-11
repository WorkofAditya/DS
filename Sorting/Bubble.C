/*
This program sort numbers based on Bubble sorting
Author: Adityasinh Sodha
Date: 10th Dec 2025
*/
#include<stdio.h>
#include<conio.h>

void main()

{

	int a[5] = {0}, i=0, j=0, k=0;
	clrscr();

	// Input loop
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	}

	// Process
	// Outer loop for steps
	for(i=0; i<=3; i++)
	{
		// Inner loop
		for(j=0; j<=3-i; j++)
		{
			// Interchange
			if(a[j] > a[j+1])
			{
				k = a[j];
				a[j] = a[j+1];
				a[j+1] = k;
			}

		}

	}

	// Output loop
	for(i=0; i<=4; i++)
	{
		printf("\n %d",a[i]);
	}
	getch();

}
