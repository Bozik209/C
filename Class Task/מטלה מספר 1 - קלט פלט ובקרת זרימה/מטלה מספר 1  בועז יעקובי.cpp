//////תרגיל 1

//
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	///*int speed, km;*/
//	float time, speed, km;
//	printf_s("Please enter your km/h:\n");
//	scanf_s("%f", &speed);
//	printf_s("Please enter your distance:\n");
//	scanf_s("%f", &km);
//	time = (speed / km) * 60;
//	printf_s("Arrival time is:%2.f min", time);
//	getchar();
//	getchar();
//	main();
//}










////תרגיל 2


//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	char CH;
//	int Liters;
//	float p;
//	//input
//	printf_s("Please select \n");
//	printf_s("S for 98 \n");
//	printf_s("R for 95 \n");
//	printf_s("D for soler \n");
//	printf_s("X for cancel \n\n");
//	scanf_s("%C", &CH);
//	//input for S
//	switch (CH)
//	{
//	case 'S':
//	case 's':
//		printf_s("How much Liters to fill\n");
//		scanf_s("%d", &Liters);
//		p = Liters * 6.5;
//		printf_s("the payment is:%.1f\n\n\n", p);
//		if (p >= 150)
//			printf_s("!!!Free newpapar!!!\n\n\n");
//		break;
//	}
//	//input for R
//	switch (CH)
//	{
//	case 'R':
//	case 'r':
//		printf_s("How much Liters to fill\n");
//		scanf_s("%d", &Liters);
//		p = Liters * 5.8;
//		printf_s("the payment is:%.1f\n\n\n", p);
//		if (p >= 150)
//			printf_s("!!!Free newpapar!!!\n\n\n");
//		break;
//	}
//	//input for D
//	switch (CH)
//	{
//	case 'D':
//	case 'd':
//		printf_s("How much Liters to fill\n");
//		scanf_s("%d", &Liters);
//		p = Liters * 5.7;
//		printf_s("the payment is:%.1f\n\n\n", p);
//		if (p >= 150)
//			printf_s("!!!Free newpapar!!!\n\n\n");
//		break;
//	}
//	//input for X
//	switch (CH)
//	{
//	case 'X':
//	case 'x':
//		printf_s("have a good day!!\n\n\n");
//		break;
//	}
//	getchar();
//	getchar();
//	main();
//}









//תרגיל 3


//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	int num, menu, a;
//	printf_s("Enter number whit 4 digit\n");
//	scanf_s("%d", &num);
//	if ((num >= 1 && num <= 10000) || (num >= -10000 && num <= -1))
//		printf_s("Select from the menu:\n 1)Calculates and prints the number of digits of the number \n 2)Check whether the number is an odd number or an odd number \n 3)If the negative number increases it Exponentiation \n ");
//	scanf_s("%d", &menu);
//	switch (menu)
//	{
//	case(1):
//		if ((num >= 1 && num <= 10) || (num <= -1 && num >= -10))
//			printf_s("1 digit");
//		if ((num >= 10 && num <= 100) || (num <= -10 && num >= -100))
//			printf_s("2 digit");
//		if ((num >= 100 && num <= 1000) || (num <= -100 && num >= -1000))
//			printf_s("3 digit");
//		if ((num >= 1000 && num <= 10000) || (num <= -1000 && num >= -10000))
//			printf_s("4 digit");
//		break;
//	case(2):
//		if (num % 2 == 0)
//			printf("The number is odd");
//		else
//			printf_s("The number is not odd");
//	case(3):
//		if (num < 0)
//		{
//			a = num * num;
//			printf("your number in Exponentiation: %d", a);
//		}
//		else
//			printf("numer is negative");
//	}
//
//	getchar();
//	getchar();
//	main();
//}




////תרגיל 4



//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	int num, temp, reversnum = 0, originalnum;
//	printf_s("Enter number with 5 digit\n");
//	scanf_s("%d", &num);
//	originalnum = num;
//	while (num != 0 && num <= 99999)
//	{
//		temp = num % 10;
//		reversnum = reversnum * 10 + temp;
//		num /= 10;
//	}
//	if (originalnum == reversnum)
//	{
//		printf_s("%d this is polidrom", originalnum);
//	}
//	else
//	{
//		printf_s("this is not polidrom");
//	}
//
//	getchar();
//	getchar();
//	main();
//}




////תרגיל 5



//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	int num1, num2, x = 0, y = 0;
//	printf_s("Please enter 2 number whit 3 digit:\n");
//	scanf_s("%d%d", &num1, &num2);
//	while (num1 != 0)
//	{
//		if (num1 % 10 == 5)
//			x++;
//		num1 /= 10;
//	}
//	while (num2 != 0)
//	{
//		if (num2 % 10 == 5)
//			y++;
//		num2 /= 10;
//	}
//	if (x>y)
//	{
//		printf_s("The first number won!\n");
//	}
//	else if (x<y)
//	{
//		printf_s("The second number won!\n");
//	}
//	else if (x == 0 && y == 0)
//	{
//		printf("There are no 5 in the number\n");
//	}
//	else
//	{
//		printf_s("The number of times there is 5 equals\n");
//	}
//
//
//
//	getchar();
//	getchar();
//	main();
//}