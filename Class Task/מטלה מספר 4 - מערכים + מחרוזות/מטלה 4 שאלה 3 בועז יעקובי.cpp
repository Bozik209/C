#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10 
void fiil(int arr[size])  //מילוי רנדומלי
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 200 - 100;
}
void Organize(int arr[size], int brr[size]) // סידור לפי מספרים שלילים קודם
{
	int i, j = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i]<0)  
		{
			brr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < size; i++)
	{
		if (arr[i]>0)  
		{
			brr[j] = arr[i];
			j++;
		}
	}
}
void Comparison(int arr[size], int brr[size], int crr[size])  //סידור לפי גדול קטן בין שני המערכים
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == brr[i])
		{
			crr[i] = arr[i];
		}
		if (arr[i]>brr[i])
		{
			crr[i] = arr[i];
		}
		if (arr[i]<brr[i])
		{
			crr[i] = brr[i];
		}

	}
}
void print(int arr[size], int brr[size], int crr[size])
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] %3d\t", i, arr[i]);
		printf("brr[%d] %3d\t", i, brr[i]);
		printf("crr[%d] %3d\n", i, crr[i]);

	}
}
void main()
{
	int arr[size], brr[size] = { 0 }, crr[size] = { 0 };
	srand(time(NULL));
	fiil(arr);
	Organize(arr, brr);
	Comparison(arr, brr, crr);
	print(arr, brr, crr);
	getchar();
}
