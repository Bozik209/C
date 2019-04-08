//Tesk 3 boaz yaakobi

//exercise 1

//#include <stdio.h>
//#include <conio.h>
//void power(int num)
//{
//	int sum1 = 0, sum2 = 0;
//	num = num - 1; //num בדיקה של כל הספרות מתחת ל
//	while (num != 0)
//	{
//		if (num % 2 == 0) // בדיקה אם המספר זוגי או אי זוגי
//		{
//			printf("even:%d\t", num);
//			sum1 = num + sum1; //שמירה על הערך של הזוגי
//		}
//		else
//		{
//			printf("odd:%d\n", num);
//			sum2 = num + sum2;//שמירה על הערך של האי זוגי
//		}
//		num--;
//	}
//	printf("sum1 :%d\n", sum1);
//	printf("sum2 :%d\n", sum2);
//}
//
//void main()
//{
//	int num;
//	printf("Plese enter number:\n");
//	scanf_s("%d", &num);
//	power(num); //קריאה ושליחת משתנה לפונקיצה
//	getchar();
//	getchar();
//	main();
//}




//exercise 2

//#include <stdio.h>
//#include <conio.h>
//void power(int mispar, int digit)
//{
//	int num = 0, sum = 1;
//	while (mispar>0)
//	{
//		if (mispar % 10 == digit) // digit בדיקה אם הספרה שווה ל 
//		{
//			mispar = mispar / 10;  //הוצאת הספרה
//			continue;
//
//
//		}
//		else //מעבר על כל המספרים 
//		{
//			num = num + mispar % 10 * sum;
//			mispar = mispar / 10;
//			sum = sum * 10;
//		}
//	}
//	printf("%d\n", num);
//}
//
//void main()
//{
//	int mispar, digit, i;
//	for (i = 1; i <= 30; i++)   //קליטת 30 מספרים
//	{
//		printf("|||||||||||||||||||||||||||||||||||||||||\n");
//		printf("Enter %d/30 numbers with no more than 5 digits:\n", i);
//		scanf_s("%d", &mispar);
//		printf("Enter digit:\n");
//		scanf_s("%d", &digit);
//		if (mispar >= 0 && mispar <= 99999)  // בדיקה של מספרים בהם יש לא יותר מ- 5 ספרות 
//		{
//			power(mispar, digit); //קריאה ושליחת משתנה לפונקציה
//		}
//		else
//		{
//			printf("pleas enter numbers with no more than 5 digits\n");
//		}
//	}
//	getchar();
//	getchar();
//}



//exercise 3

//#include <stdio.h>
//#include <conio.h>
//void power(int mispar, int num)
//{
//	int i = 0, num2;
//	num2 = num;  //num שמירה על הערך של  
//	while (num>0)
//	{
//		i = i + mispar % 10;  // חישוב ושמירה על סכום הספרות
//		mispar = mispar / 10; // הסרה" של הספרה"
//		num--;
//	}
//	printf("The sum of the lest %d digits is %d\n", num2, i);
//}
//void main()
//{
//	int mispar, num;
//	while (1)   // שהתכנית תהיה אין סופית
//	{
//		printf("Enter nuber:\n");
//		scanf_s("%d", &mispar);
//		printf("Enter digit:\n");
//		scanf_s("%d", &num);
//		if (mispar != -1 && num != -1)
//		{
//			power(mispar, num); //קריאה ושליחת משתנה לפונקציה
//		}
//		else
//		{
//			break; //יציאה מהלולאה
//		}
//	}
//	getchar();
//	getchar();
//}



//exercise 4

//#include <stdio.h>
//#include <conio.h>
//int power(int num)
//{
//	int i, result = 1; // חישוב המספרים
//	for (i = 1; i <= num; i++)
//	{
//		result = result * i;
//	}
//	return result;
//}
//void main()
//{
//	int i, j, nLines, k;
//	printf("Enter a number smaller than 20\n");
//	scanf_s("%d", &nLines);
//	if (nLines <= 20) // התנאי שהמספר יהיה קטן מ-20
//	{
//		for (i = 0; i < nLines; i++) // הלולאות שיוצרות את המשולש
//		{
//			for (j = 0; j <= nLines - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				k = power(i) / (power(j) * power(i - j)); //קריאה ושליחת משתנים לפונקציה
//				printf("%2d", k);
//			}
//			printf("\n");
//		}
//	}
//	else
//	{
//		printf("Worng the number is biger than 20\n");
//	}
//	getchar();
//	getchar();
//}



//exercise 5

//#include<stdio.h>
//#include <conio.h>
//void power(int row)
//{
//	int i, j, k, space;
//	space = row - 1;
//	for (i = 1; i <= row; i++) //משולש עליון
//	{
//		for (j = 1; j <= space; j++)
//		{
//			printf(" ");
//		}
//		for (k = row * 2; k >= i * 2; k--)
//		{
//			printf("$");
//		}
//		printf("\n");
//		space++;
//	}
//	for (i = 1; i <= row; i++) //משולש תחתון
//	{
//		for (j = space - 1; j >= 1; j--)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= i * 2 - 1; k++)
//		{
//			printf("$");
//		}
//		printf("\n");
//		space--;
//	}
//}
//void main()
//{
//	int row;
//	printf("|||||||||||||||||||||\n");
//	printf("Enter number of rows: \n");
//	scanf_s("%d", &row); //קריאה ושליחת משתנה לפונקציה
//	power(row);
//	getchar();
//	getchar();
//}
