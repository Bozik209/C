//PART 1
#include <stdio.h>
#include <conio.h>
void main()
{
	
	int num1, div = 1, divsum = 0;
	printf("enter number:\n");
	scanf_s("%d", &num1);

	while (div<num1)
	{
		if (num1%div == 0)
		{
			divsum = divsum + div;
		}
		div++;
	}
	if (divsum == num1)
	{
		printf("%d is perfect!", num1);
	}
	else
	{
		printf("%d is not perfect!", num1);
	}
	getchar();
	getchar();
	
}
////PART 2
//#include <stdio.h>
//#include <conio.h>
//void main()
//{
//	int num1, sum = 0, i, j;
//	for (i = 1; i < 100000; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (j == sum)
//			printf("The number %d is perfect\n", j);
//		sum = 0;
//	}
//	getchar();
//	getchar();
//
//}
