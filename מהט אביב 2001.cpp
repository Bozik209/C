#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 4

void print(int arr[size][size])
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int chack_main(int arr[size][size])
{                                         
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			if (arr[i][j] != arr[j][i])    //arr[i][j] == arr[j][i]  בדיקת אלכסן ראשי
				return 0;
	return 1;
}

int chack_else(int arr[size][size])
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j != size - 1)    // i + j != n - 1   בדיקת אלכסון משני
				return 0;             //if (arr[i][j]==arr)
			
		}
	}
	return 1;
}

void main()
{
	int i, j, arr[size][size] = { {98,45,12,1 },
	                            {45,56,23,52},
	                            {12,23,54,75},
                                {1,52,75,98 }};
	print(arr);

	if (chack_main(arr))
		printf("equl!!\n");
	else
		printf("no equl!!\n");

	if (chack_else(arr))
		printf("else equl!!\n");
	else
		printf("else no equl!!\n");
	
	
	getchar();
}