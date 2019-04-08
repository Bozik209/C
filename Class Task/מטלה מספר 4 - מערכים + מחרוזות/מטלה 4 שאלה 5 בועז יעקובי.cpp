#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10
void fill(int arr[L])  //פונקצית מלוי
{
	int i;
	for ( i = 0; i < L; i++)
		arr[i] = rand() % 10;
	for (i = 0; i < L; i++)
		printf("%3d", arr[i]);
}
void func(int arr[L], int arr2[L])  //עריכת מערך חדש עם חיבור המספרים
{
	int i, j, temp = 0,sum=0;
	for ( i = 0; i < L; i++)
	{
		if (i % 2 == 0 && i != L-1)//i<10
		{ 
			temp = arr[i] * 10;    //חיבור המספרים
			arr2[i] = temp;

			temp = arr[i + 1] + temp;      
			arr2[i] = temp;

			puts("\n");
			printf("arr2:%d", arr2[i]);
		}
		if (L % 2 != 0)      //יצירת מערך חדש והמילוי שלו
		{
			if (i == L-1)
			{
				sum = arr[i] * 10;
				arr2[i] = sum;
				printf("sumarr2:%d\n", arr2[i]);
			}
		}
		
	}
}
void check(int arr2[L])
{
	int i,sum=0,max=0;
	for ( i = 0; i < L; i+=2)  //בדיקת ההפרש הכי גדול
	{
		sum = arr2[i] - arr2[i + 2];
		if (sum > max)
		{
			max = sum;
		}
	}
	printf("\nmax:%d", max);
}
void main()
{
	int arr[L] = { 0 }, arr2[L / 2] = {0};
	srand(time(NULL));
	fill(arr);
	func(arr, arr2);
	check(arr2);
	getchar();
}

