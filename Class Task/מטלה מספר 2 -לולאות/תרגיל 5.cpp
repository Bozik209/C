#include<stdio.h>
#include<conio.h>
void main()
{
	int i, num, big = 0, small = 0, num1 = 0;
	float average = 0;
	printf("Enter a number:\n");
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num);
		average = average + num;
		num1 = num;
		if ((num%3==0) && (num%1==0) && (num%5==0))
		{
			printf("%d divides in 1,3,5\n", num);
		}
		if (num<small)
		{
			small = num;
		}
		if (num > big)
		{
			big = num;
		}
		else if (small == 0)
			small = num;
	}
	average = average / i;
	printf("the big number: %d\n the small number is: %d\n the average is: %0.2f", big, small, average);
	getchar();
	getchar();
}

