#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 6
void fillarr(int arr[][size]) //קליטת מספר הילדים בכל קומה
{
	int i, j, sum = 0;
	for (i = 0; i<size; i++)
	{
		printf("floor: %d\n", i + 5);
		for (j = 0; j<size; j++)
		{
			printf("how many kid have in aprtment %d\n ", j+1);
			*(*(arr + i) + j) = rand() % 10;
			//scanf_s("%d", &*(*(arr + i) + j));
			sum += *(*(arr + i) + j);
		}
		printf("floor number %d has %d kids\n\n", i + 5, sum);
		sum = 0;
	}
}
void maxaprtments1(int arr[][size], int *cnt1, int *max1) //בדיקת מספר הקומה עם הכי הרבה ילדים
{
	int i, j, sum, max = 0;
	for (i = 0; i<size; i++)
	{
		sum = 0;
		for (j = 0; j<size; j++)
			sum += *(*(arr + i) + j);
		if (sum>max)
		{
			max = sum;
			*cnt1 = i + 5;
		}
	}
	*max1 = max;


}
void maxaprtments2(int arr[][size],int *cnt2, int *max2, int *cnt1) // בדיקת הקומה השנייה עם הכי הרבה ילדים
{
	int i, j, sum, max = 0;
	for (i = 0; i<size; i++)
	{
		sum = 0;
		for (j = 0; j<size; j++)
			sum += *(*(arr + i) + j);
		if ((sum > max)  && ( *cnt1 != i + 5))
		{
			max = sum;
			*cnt2 = i + 5;
		}
	}
	*max2 = max;
}
void main()
{
	int max1,max2, cnt1, cnt2, arr[size][size];
	srand(time(NULL));
	fillarr(arr);
	maxaprtments1(arr, &cnt1, &max1);
	maxaprtments2(arr, &cnt2, &max2,&cnt1);
	printf(" The first  floor (number %d) with the most kids %d  \n", cnt1, max1);
	printf(" The second floor (number %d) with the most kids %d  \n", cnt2, max2);

	getchar();
}
