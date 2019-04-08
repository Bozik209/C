#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#define size 10
void full(int arr1[],int arr2[])
{
	int i;
	for ( i = 0; i < size; i++)
	{
		arr1[i] = rand() % 100;    //קליטת 10 מספרים ראנדומלים
		arr2[i] = arr1[i];
	}
}

void switch_func(int arr1[], int arr2[])
{
	int i=0;
	for ( i = 0; i < size; i++)
	{
		if (i % 2 != 0)   // בחירת החלפה בין זוגות
		{
			arr2[i - 1] = arr1[i];   //החלפה בין המערכים
			arr2[i] = arr1[i-1];
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%d)  arr1)%4d \t", i + 1, arr1[i]);
		printf("%d)  arr2)%4d \n", i + 1, arr2[i]);
	}
}

void main()
{
	int arr1[size], arr2[size];
	srand(time(NULL));
	full(arr1,arr2);
	switch_func(arr1,arr2);
	getchar();
}