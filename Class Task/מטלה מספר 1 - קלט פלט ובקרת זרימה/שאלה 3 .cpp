#include<stdio.h>
#include<conio.h>
void main()
{
	int num, menu, a;
	printf_s("Enter number whit 4 digit\n");
	scanf_s("%d", &num);
	if ((num >= 1 && num <= 10000) || (num >= -10000 && num <= -1))
		printf_s("Select from the menu:\n 1)Calculates and prints the number of digits of the number \n 2)Check whether the number is an odd number or an odd number \n 3)If the negative number increases it Exponentiation \n ");
	scanf_s("%d", &menu);
	switch (menu)
	{
	case(1):
		if ((num >= 1 && num <= 10) || (num <= -1 && num >= -10))
			printf_s("1 digit");
		if ((num >= 10 && num <= 100) || (num <= -10 && num >= -100))
			printf_s("2 digit");
		if ((num >= 100 && num <= 1000) || (num <= -100 && num >= -1000))
			printf_s("3 digit");
		if ((num >= 1000 && num <= 10000) || (num <= -1000 && num >= -10000))
			printf_s("4 digit");
		break;
	case(2):
		if (num % 2 == 0)
			printf("The number is odd");
		else
			printf_s("The number is not odd");
	case(3):
		if (num < 0)
		{
			a = num * num;
			printf("your number in Exponentiation: %d", a);
		}
		else
			printf("numer is negative");
	}

getchar();
getchar();
main();
}