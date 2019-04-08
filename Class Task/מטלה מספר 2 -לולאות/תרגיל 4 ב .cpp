#include <stdio.h>
#include <conio.h>
void main()
{
	int num1, sum = 0, i, j;
	for (i = 1; i < 100000; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (j == sum)
			printf("The number %d is perfect\n", j);
		sum = 0;
	}
	getchar();
	getchar();

}
