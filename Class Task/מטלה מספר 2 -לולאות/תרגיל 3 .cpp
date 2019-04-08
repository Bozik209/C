#include <stdio.h>
#include <conio.h>
void main()
{
	int num1, num2,hadot=0,hasrot=0,meot=0;
	printf("hello\n");
    printf("enter 30 number with 3 digit:\n");
	for (num1= 0; num1 <2; num1++)
	{
		scanf_s("%d", &num2);
			hadot = num2 % 10+hadot;
			hasrot = num2 / 10 % 10+hasrot;
			meot = num2 / 100 % 10 + meot;
	}
	if (hadot>hasrot)
	{
		if (hadot>meot)
		{
			printf("hadot:%d\n hasrot:%d\n meot:%d\n", hadot, hasrot, meot);
		}
	}
	else
	{
		if (meot>hadot)
		{
			if (meot>hasrot)
			{
				printf("meot:%d\n hasrot:%d\n hadot:%d\n", meot,hasrot,meot);
			}
			
		}
		else
		{
			printf("hasrot:%d\n hadot:%d\n meot:%d\n", hasrot,meot,hadot);
		}
	}
	//printf("hadot:%d\nhasrot:%d\nmeot:%d\n", hadot,hasrot,meot);
	
	
	getchar();
	getchar();
	main();
}
//1 = num % 10
//10 = num / 100 % 10
//100 = num / 10 % 10
//1000 = num / 1000
