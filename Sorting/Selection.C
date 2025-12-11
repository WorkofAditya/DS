/*
This program sort numbers based on Selection sorting
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
		for(j=i+1; j<=4; j++)
		{
			// Interchange
			if(a[i] > a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
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