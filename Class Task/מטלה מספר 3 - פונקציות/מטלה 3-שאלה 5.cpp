#include<stdio.h>
void power(int row)
{
	int i, j,k,space;
	space = row - 1;
	for ( i = 1; i <= row; i++)
	{
		for (j = 1; j <=space; j++)
		{
			printf(" ");
		}
		for ( k = row*2; k >=i*2; k--)
		{
		printf("$");
		}
		printf("\n");
		space++;
	}
	for ( i = 1; i <=row ; i++)
	{
		for ( j = space-1; j >= 1; j--)
		{
			printf(" ");
		}
		for ( k = 1; k <= i*2-1; k++)
		{
			printf("$");
		}
		printf("\n");
		space--;
	}
}
void main()
{
	int row;
	printf("|||||||||||||||||||||\n");
	printf("Enter number of rows: \n");
	scanf_s("%d", &row);
	power(row);
	getchar();
	getchar();
}

