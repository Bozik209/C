#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, x = 0, y = 0;
	printf_s("Please enter 2 number whit 3 digit:\n");
	scanf_s("%d%d", &num1,&num2);
	while (num1!=0)
	{
		if (num1 % 10 == 5)
			x++;
		num1 /= 10;
	}
	while (num2 != 0)
	{
		if (num2 % 10 == 5)
			y++;
		num2 /= 10;
	}
	if (x>y)
	{
		printf_s("The first number won!\n");
	}
	else if (x<y)
	{
		printf_s("The second number won!\n");
	}
	else if (x==0 && y==0)
	{
		printf("There are no 5 in the number\n");
	}
	else
	{
		printf_s("The number of times there is 5 equals\n");
	}
	


	getchar();
	getchar();
	main();
}