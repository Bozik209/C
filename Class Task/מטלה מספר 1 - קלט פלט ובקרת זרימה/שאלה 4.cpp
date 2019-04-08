#include<stdio.h>
#include<conio.h>
void main()
{
	int num, temp, reversnum=0, originalnum;
	printf_s("Enter number with 5 digit\n");
	scanf_s("%d", &num);
	originalnum = num;
	while (num != 0 && num <= 99999)
	{
		temp = num % 10;
		reversnum = reversnum * 10 + temp;
		num /= 10;
	}
	if (originalnum==reversnum)
	{
		printf_s("%d this is polidrom", originalnum);
	}
	else
	{
		printf_s("this is not polidrom");
	}



}
//(num >= 1 && num <= 100000) || (num >= -100000 && num <= -1)
	//if ((num >= 1) || (num < 99999)
