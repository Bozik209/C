#include <stdio.h>
#include <conio.h>
void main()
{
	int num1,div=1,divsum=0;
	printf("enter number:\n");
	scanf_s("%d", &num1);
	
	while (div<num1)
	{
		if (num1%div==0)
		{
			divsum = divsum + div;
		}
		div++;
	}
	if (divsum==num1)
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