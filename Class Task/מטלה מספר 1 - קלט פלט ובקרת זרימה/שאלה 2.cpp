#include<stdio.h>
#include<conio.h>
void main()
{
	char CH;
	int Liters;
	float p;
	//input
	printf_s("Please select \n");
	printf_s("S for 98 \n");
	printf_s("R for 95 \n");
	printf_s("D for soler \n");
	printf_s("X for cancel \n\n");
	scanf_s("%C", &CH);
	//input for S
	switch (CH)
	{
	case 'S':
	case 's':
		printf_s("How much Liters to fill\n");
		scanf_s("%d", &Liters);
		p = Liters * 6.5;
		printf_s("the payment is:%.1f\n\n\n", p);
		if (p >= 150)
			printf_s("!!!Free newpapar!!!\n\n\n");
		break;
	}
	//input for R
	switch (CH)
	{
	case 'R':
	case 'r':
		printf_s("How much Liters to fill\n");
		scanf_s("%d", &Liters);
		p = Liters * 5.8;
		printf_s("the payment is:%.1f\n\n\n", p);
		if (p >= 150)
			printf_s("!!!Free newpapar!!!\n\n\n");
		break;
	}
	//input for D
	switch (CH)
	{
	case 'D':
	case 'd':
		printf_s("How much Liters to fill\n");
		scanf_s("%d", &Liters);
		p = Liters * 5.7;
		printf_s("the payment is:%.1f\n\n\n", p);
		if (p >= 150)
			printf_s("!!!Free newpapar!!!\n\n\n");
		break;
	}
	//input for X
	switch (CH)
	{
	case 'X':
	case 'x':
		printf_s("have a good day!!\n\n\n");
		break;
	}
	getchar();
	getchar();

}