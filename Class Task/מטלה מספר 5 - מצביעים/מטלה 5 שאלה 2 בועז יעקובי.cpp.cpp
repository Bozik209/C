#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10
void fill(int arr[]) //מילוי המערך
{
	int i,j;
	for ( i = 0; i < size; i++)
	{
			*(arr+i) = rand() % 10;
			printf("%2d", *(arr + i));
	}
	printf("\n");
}

void check(int arr[],int *num1,int *num2)
{
	int i,sum1=0,sum2=0;
	for (i = 0; i < size; i++)
	{	
		if (*(arr + i) % *num1 == 0) //בדיקת אם המספר מתחלק ב 2 ללא שארית
			sum1++;
		if (*(arr + i) % *num2 == 0)//בדיקת אם המספר מתחלק ב 3 ללא שארית
			sum2++;
	}
	printf("sum1=%d\n", sum1);
	printf("sum2=%d\n", sum2);

}
void main()
{
	int num1 = 2, num2 = 3;
	int arr[size];
	srand(time(NULL));
	fill(arr);
	check(arr, &num1, &num2);
	getchar();
	main();
}
