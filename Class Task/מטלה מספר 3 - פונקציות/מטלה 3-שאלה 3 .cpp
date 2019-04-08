#include <stdio.h>
#include <conio.h>
void power(int mispar, int num)
{
	int i = 0,num2;
	num2 = num;  //num שמירה על הערך של  
	while (num>0) 
	{
		i = i + mispar % 10;  // חישוב ושמירה על סכום הספרות
		mispar = mispar / 10; // הסרה" של הספרה"
		num--; 
	}
	printf("The sum of the lest %d digits is %d\n", num2, i);
}
void main()
{
	int mispar, num;
	while (1)   // שהתכנית תהיה אין סופית
	{
	printf("Enter nuber:\n");
	scanf_s("%d", &mispar);
	printf("Enter digit:\n");
	scanf_s("%d", &num);
	if (mispar != -1 && num != -1) 
	{
	power(mispar, num); // קריאה לפונקציה
	}
	else
	{
		break; //יציאה מהלולאה
	}
	}
	getchar();
	getchar();
}


















//#include <stdio.h>
//void func(int mispar, int num)
//{
//	int sum = 0;
//	while (num>0)
//	{
//		sum += mispar % 10;
//		mispar /= 10;
//		num--;
//	}
//	printf("the sum is %d lest %d\n", num, sum);
//	sum = 0;
//}
//int main()
//{
//	int mispar=1, num=1, sum=0;
//	while (mispar != -1 && num != -1)
//	{
//	printf("Enter nuber:\n");
//	scanf_s("%d", &mispar);
//	printf("Enter digit:\n");
//	scanf_s("%d", &num);
//	func(mispar, num);
//	}
//	getchar();
//	getchar();
//}