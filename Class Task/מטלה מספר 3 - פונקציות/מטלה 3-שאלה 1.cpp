#include <stdio.h>
//???????
void power(int num)
{
	int sum1=0, sum2=0;
	num =num- 1;
	while (num!=0)
	{
		if (num%2==0)
		{
			printf("even:%d\t", num);
			sum1 = num + sum1;
		}
		else
		{
			printf("odd:%d\n", num);
			sum2 = num + sum2;
		}
		num--;
	}
	printf("sum1 :%d\n", sum1);
	printf("sum2 :%d\n", sum2);
}

void main()
{
	int num;
	printf("Plese enter number:\n");
	scanf_s("%d", &num);
	//????? ????????
	power(num);
	getchar();
	getchar();
	main();
}