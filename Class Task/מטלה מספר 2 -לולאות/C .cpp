/*#include<stdio.h>//����� 1 ����� for
#include<conio.h>
void main() {
	int i, j;
	for (i = 1; i <= 10; i++)//����� ���� ����� ���� ����� �����
	{
		for (j = 1; j <= 10; j++)// ����� ���� ���� ����� �����
		
			printf("%4d", i*j);// ������ ��� ����� �� ��� ������� ��� ����� ��� ��
			printf("\n");
	
	}
	getchar();
	_getch();
}*/
---------------------------------------
/*#include<stdio.h>//����� 1 ����� while
#include<conio.h>
void main()
{
	int i = 1, j = 1;
	while (i <= 10)
	{
		while (j <= 10)
		{
			printf("%4d", i*j);//�� �� ������ �� ���� ���� ����� ������ ���� ��� �� ������ ������� ������ ���� �� ������ ���  ��� ����� �� ���� �������
			j++;
		}
		j = 1;
		printf("\n");
		i++;
	}
	getchar();
	_getch();
	}*/
	--------------------------------
	/*#include<stdio.h>//����� 1 ����� do
#include<conio.h>
void main()
{
	int i = 1, j = 1;//����� ���� ������ ������� �������
	do {
		do {
			printf("%4d", i*j);//������ ���� ��� ����� ���� ���� ������� �� ������ ������ ������� ������� ���� ����� ������� ������ ����� �� �� ���� �� ������� �� ��� ������� ������
			j++;
		} while (j <= 10);
		j = 1;
		printf("\n");
		i++;//���� ������� ����� ���� ����� ���� ������ ������� ���� ���� �� ���� ����� ���� ������� �� ����� ������� ���� �����
	} while (i <= 10);
	_getch();
}*/
-----------------------------
/*#include<stdio.h>//����� 2
#include<conio.h>
void main()
{
	int  num, i, digit1 = 0, digit10 = 0, digit100 = 0, sum1 = 0, sum10 = 0, sum100 = 0;
		for (i = 0; i < 30; i++)
		{
			printf("enter an int num that have  3 digits:\n");
			scanf_s("%d", &num);
			digit1 = num % 10;
			digit10 = (num / 10) % 10;
			digit100 = num / 10;
			sum1 += digit1;//�� ����� ����� ������,������ ���� �� ����� ��� �������� ��������� ��''� ��� ���� �� ������ �� �� ����
			sum10 += digit10;
			sum100 += digit100;//������ ������� ���� ����� ������ ��� ��� �� ������ ������ �������� ������� �� ������ ���� �������
                 }
	if ((sum1 > sum10) && (sum1 > sum100) && (sum10 > sum100))
		printf("the sum of the one digit is %d\n the sum of the 10 digit is %d\n the sum of the 100 digit is %d\n", sum1, sum10, sum100);
	else if ((sum1 > sum10) && (sum1 > sum100) && (sum100 > sum10))
		printf("the sum of the one digit is%d\n the sum of the 100 digit is %d the sume of the 10 digit is %d\n", sum1, sum10, sum100);
	else if ((sum10 > sum10) && (sum10 > sum1) && (sum1 > sum100))
		printf("the sum of the 10 digit is %d\n the sum of 1 digit %d\n the sum of the 100 digit is %d\n", sum1, sum10, sum100);
	else if ((sum10 > sum100) && (sum10 > sum1) && (sum100 > sum1))
		printf("the sum of the 10 digit is %d\n the sum of 100 digit %d\n the sum of 1 digit is %d\n",sum10,sum100,sum1);
	else if ((sum100 > sum1) && (sum100 > sum10) && (sum1 > sum10))
		printf("the sum of the 100 digit is %d\n the sum of 1 digit %d\n the sum of 10 digit is %d\n",sum100,sum1,sum10);
	else
		printf("the sum of the 100 digit is %d\n the sum of 10 digit %d\n the sum of 1 digit is %d\n",sum100,sum10,sum1);//�� ������ ��''� ��� ���� ��� ����� �� ����� �� ������� ����� �� ���� ���� ����� �� ��� ����� ��� ���� ���� �����

	getchar();
	_getch();
	main();




	}*/
	----------------------------------------------
	/*#include<stdio.h>//����� 3 �
#include<conio.h>
void main()
{
	int  num1, num2, mul = 1, newnum = 0;
	printf("enter a postive int num that have 5 digit\nand int positive number that have 1 digit\n");
	scanf_s("%d\n%d", &num1, &num2);
	if (num1 > 99999 || num1 < 10000 || num2 < 0 || num2>9)//����� �������� �� ����� ��� �������� �����
		return;
	while (num1 != 0)
	{
		if ((num1 < 0) || (num2 < 0))//����� ������ �����
			break;
		if (num1 % 10 == num2)//����� ���� �� ��� ����� ����� ���� ���� ������ ���� �10 �� �� ��� ���� ��� ������ ���� ��� ����� ���� ��� ���� �� ������ ����� ������ �� ���� ������
			num1 /= 10;
		else
		{
			newnum += num1 % 10 * mul;//����� ���� ��� ��� ������ ���� �� ����� ������� ������ ��"���" ������ ��� ����� ������ �"���" ����� ������ ����� ��� ���� ���� ����� ����
			mul *= 10;
			num1 /= 10;
		}
	}
	printf("the new num is %d\n", newnum);

	_getch();

	getchar();
}


*/
-------------------
/*#include<stdio.h>//����� 3 �
#include<conio.h>
void main()
{
	int  num1, num2, mul = 1, newnum = 0;
	printf("enter a postive int num that have 5 digit\nand int positive number that have 1 digit\n");
	scanf_s("%d\n%d", &num1, &num2);

	while ((num1 != 0) && (num2 != 0))
	{
		if ((num1 < 0) || (num2 < 0))
			break;
		while (num1 != 0)//������ ��� ����� ���� �� ������ ��� �� ��� ����� �� ���� �0
		{
			if (num1 % 10 == num2)
				num1 /= 10;
			else
			{
				newnum += num1 % 10 * mul;
				mul *= 10;
				num1 /= 10;
			}
		}
		printf("the new num is %d\n", newnum);

		_getch();

		getchar();
	}
	}
	*/
		---------------------------------------
		/*#include<stdio.h>//����� 4 �
#include<conio.h>
void main()
{
	int num, divider = 1, sum = 0;
	printf("enter a number\n");
	scanf_s("%d", &num);
	if (num <= 0)// ���� ����� ����� ��� 0
		return;
	while (divider < num)//������ ��� ���� ����� ��� ���� �� ����� ����� ����� ��� ����� �"�����" ������ ����� ����� ��� ����� �1
	{
		if (num%divider == 0)
			sum += divider;
		divider++;
	}//���� ������� ��� ��� ����  �� ����� ���� �"�����" �� �� ��� ������ ������� ����� �� �� ����� ���� �� ������
	if (num == sum)
		printf("the number %d is an advanced number\n", num);
	else
	{
		printf("the number %d is not an advanced number\n", num);
	}
	getchar();
	_getch();
	main();
	}*/
--------------------
/*#include<stdio.h>//����� 4 �
#include<conio.h>

int num1, sum = 0, i, j;

for (i = 1; i < 100000; i++)//����� ����� �������
{

for (j = 1; j < i; j++)//����� ����� ������ �� ��� ����� ������� ��� ������ ����� ������ �����
{
if (i % j == 0)
{
sum += j;//��� ������ ������ ����� ������ ����� ������ �� ������  ��'�� ��� ����� �� ����� ����� ����� ��� ����� ���� ����� ��� ������ ��'�� 
}
}
if (j == sum)
printf("the num %d is perfect\n", j);
sum = 0;//  ����� ����� �� �� ������� ������ ����� ������
}
getchar();
_getch();
}*/
-------------------
/*#include<stdio.h>//����� 5
#include<conio.h>
void main()
{
	int i, num,  bignum = 0, smallnum = 0, lastnum = 0;
	float average = 0;
	printf("enter num\n");
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num);
		average = average + num;//�� ��� �� ������ ����� ������ ������
		lastnum = num;
		if (num % 3 == 0 && num % 1 == 0 && num % 5 == 0)//���� �� ������ �� ����� ������ �� 5 1 �3 �� ����� ������ ���� �� ������
		{
			printf("%d divides in 1,3,5\n", num);
		}
		

		if (num<smallnum )//���� ��� ����� ��� ������ ���� ���� 0�� ����� ���� ���� ����� 
		{
		smallnum = num;
		}
		
		if (num > bignum)//���� ��� ����� ���� ������� ����� ���� 0 �� ���� ����� ���� ���� �����
		{
			bignum = num;
		}
		else if (smallnum == 0)//��� �� ����� ���� ���� �0 �� ��� ���� ����� ���� ����� ������ ��� ������ ���� ��� ����� ���� �� ������ ����� ����� ���� ��� ��� 
			smallnum = num;

	}

	average = average / i;//���� ������ ��� ������ ������� �������� ����


	printf("the big number: %d\n the small number is: %d\n the average is: %0.2f", bignum, smallnum, average);

	_getch();

	getchar();
	}*/