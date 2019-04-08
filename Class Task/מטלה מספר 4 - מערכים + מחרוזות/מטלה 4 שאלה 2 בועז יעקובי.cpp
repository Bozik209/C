#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define size 10
void cheak(int arr[size])
{
	int i,k=0;
	for ( i = 0; i < size; i++)
		if (arr[0] == arr[i])  //הבדיקה אם המספרים זהיים
			k++;
	if (k==i)       //אם מספר המספרים הזהיים שווה לכמות המספרים שיש במערך משמע הם כולם שווים
		printf("all the nuber are the same!\n");
	else
		printf(" the nuber are not the same!\n");
}

void first_number(int arr[size])
{
	int i,mis=2,temp=0;
	for (i = 0; i < size; i++)
	{
		while (arr[i] % mis != 0) //בדיקה של מספר ראשוני
		{ 
			mis++;
		}
		if (mis == arr[i])
			printf("\n%d is prime", arr[i]);
	}
}
void negative(int arr[size])
{
	int i;
	for ( i = 0; i < size; i++)
	{
		if (arr[i]<0)
		{
			arr[i] *= -1;  //הפיכת המספרים לחיובים

		}
		printf("\n%d)%d",i, arr[i]);
	}
}

void main()
{
	int arr[size],i;
	for (i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50; //קליטת מספרים חיובים ושלילים
		//scanf_s("%d", &arr[i]);
	}
	for ( i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	cheak(arr);
	negative(arr);
	first_number(arr);
	getchar();
	getchar();
}