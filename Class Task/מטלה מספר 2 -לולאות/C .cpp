/*#include<stdio.h>//עבודה 1 לולאת for
#include<conio.h>
void main() {
	int i, j;
	for (i = 1; i <= 10; i++)//הגדרת זקיף לולאה תנאי לולאה ומקדם
	{
		for (j = 1; j <= 10; j++)// הגדרת זקיף תנאי ומקדם לולאה
		
			printf("%4d", i*j);// בהדפסה אני מכפיל את שני הזקיפים כדי ליצור לוח כל
			printf("\n");
	
	}
	getchar();
	_getch();
}*/
---------------------------------------
/*#include<stdio.h>//עבודה 1 לולאת while
#include<conio.h>
void main()
{
	int i = 1, j = 1;
	while (i <= 10)
	{
		while (j <= 10)
		{
			printf("%4d", i*j);//עד כה הגדרנו את זקיף תנאי ומקדם הלולאה לאחר מכן את הלולאה הפנימית ובשורה הזאת את ההדפסה שבה  אני מכפיל את נשני הזקיפים
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
	/*#include<stdio.h>//עבודה 1 לולאת do
#include<conio.h>
void main()
{
	int i = 1, j = 1;//הגדרת זקפי הלולאה הראשונה והשנייה
	do {
		do {
			printf("%4d", i*j);//בלולאה הזאת אני מגדיר שבכל עשרה סיבובים של הלולאה השנייה הלולואה הראשונה עולה בספרה והלולאה השנייה תדפיס לי את המנה של המספרים של שני הזקיפים בלולאה
			j++;
		} while (j <= 10);
		j = 1;
		printf("\n");
		i++;//לאחר שסימנתי למעלה שבכל סיבוב זקיף הלולאה הפנימית עולה באחד אז כאשר מתמלא עשרה סיבובים אז הזקיף החיצוני עולה בספרה
	} while (i <= 10);
	_getch();
}*/
-----------------------------
/*#include<stdio.h>//עבודה 2
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
			sum1 += digit1;//עד עכשיו הזנתי נתונים,המשתמש הזין את המספר שלו ובאמצעות הנוסחואות הנ''ל אני מפרק את הספרות של כל מספר
			sum10 += digit10;
			sum100 += digit100;//השלושה נוסחאות האלו לוקחת בלולאה בכל פעם את הסיפרה מהמספר לקטגוריה המתאימה לה ומחברת אותה לקודמתה
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
		printf("the sum of the 100 digit is %d\n the sum of 10 digit %d\n the sum of 1 digit is %d\n",sum100,sum10,sum1);//אם התנאים הנ''ל אני מתנה בכל התניה אם הסכום של היחידות עשרות או מאות גדול מהאחר אז הוא יודפס לפי הסדר שאני הצבתי

	getchar();
	_getch();
	main();




	}*/
	----------------------------------------------
	/*#include<stdio.h>//עבודה 3 א
#include<conio.h>
void main()
{
	int  num1, num2, mul = 1, newnum = 0;
	printf("enter a postive int num that have 5 digit\nand int positive number that have 1 digit\n");
	scanf_s("%d\n%d", &num1, &num2);
	if (num1 > 99999 || num1 < 10000 || num2 < 0 || num2>9)//מוודא שהמספרים לא יחרגו ממה שהתוכנית מבקשת
		return;
	while (num1 != 0)
	{
		if ((num1 < 0) || (num2 < 0))//מוודא שהמספר חיובי
			break;
		if (num1 % 10 == num2)//המספר נבדק אם הוא מתחלק במספר השני כאשר מחלקים אותו ב10 אם לא הוא עובר שוב בלולאה כאשר הוא מתחלק בעשר שוב וככה עד שמתקבל תשובה חיובית או שאין השוואה
			num1 /= 10;
		else
		{
			newnum += num1 % 10 * mul;//המספר החדש בכל סבב בלולאה מקבל את ערכים הנכונים מכיוון שה"מול" והמספר בכל סיבוב משתנים ה"מול" מוכפל והמספר מתחלק וכך יוצא בסוף המספר החדש
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
/*#include<stdio.h>//עבודה 3 ב
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
		while (num1 != 0)//הלולאה רצה באותה צורה רק שהתנאי הוא כל עוד המספר לא שווה ל0
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
		/*#include<stdio.h>//עבודה 4 א
#include<conio.h>
void main()
{
	int num, divider = 1, sum = 0;
	printf("enter a number\n");
	scanf_s("%d", &num);
	if (num <= 0)// תנאי למספר חיובי מעל 0
		return;
	while (divider < num)//הלולאה רצה ובכל סיבוב אני בודק אם המספר מתחלק במחלק בלי שארית ל"תוצאה" מתווסף המחלק שגודל בכל סיבוב ב1
	{
		if (num%divider == 0)
			sum += divider;
		divider++;
	}//לאחר שהלולאה רצה אני בודק  אם המספר שווה ל"תוצאה" אם כן הוא משוכלל והתוצאה תודפס אם לא יודפס מספר לא משוכלל
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
/*#include<stdio.h>//עבודת 4 ב
#include<conio.h>

int num1, sum = 0, i, j;

for (i = 1; i < 100000; i++)//הגדרת לולאה ראשונית
{

for (j = 1; j < i; j++)//הגדרת לולאה פנימית כל עוד הזקיף החיצוני קטן מהזקיף הראשי הלולאה עובדת
{
if (i % j == 0)
{
sum += j;//כמו הנוסחא בתרגיל הקודם הנוסחא בודקת ומחברת את התוצאה  בג'יי וכך בודקת אם המספר מורכב ולאחר מכן בשורה הבאה משווה בין התוצאה לג'יי 
}
}
if (j == sum)
printf("the num %d is perfect\n", j);
sum = 0;//  התכדי לבדוק את כל המספרים התוצאה צריכה להתאפס
}
getchar();
_getch();
}*/
-------------------
/*#include<stdio.h>//עבודה 5
#include<conio.h>
void main()
{
	int i, num,  bignum = 0, smallnum = 0, lastnum = 0;
	float average = 0;
	printf("enter num\n");
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num);
		average = average + num;//כל סבב של הלולאה המספר מתווסף לממוצע
		lastnum = num;
		if (num % 3 == 0 && num % 1 == 0 && num % 5 == 0)//תנאי אם השארית של המספר בחילוק עם 5 1 ו3 אז תתבצע הפועלה הבאה של ההדפסה
		{
			printf("%d divides in 1,3,5\n", num);
		}
		

		if (num<smallnum )//תנאי שאם המספר קטן מהמספר הקטן ששוה 0אז המספר הקטן שווה למספר 
		{
		smallnum = num;
		}
		
		if (num > bignum)//תנאי שאם המספר גדול מההמספר הגדול ששוה 0 אז המסר הגדול יהיה שווה למספר
		{
			bignum = num;
		}
		else if (smallnum == 0)//כאן אם המספר הקטן שווה ל0 אז הוא חוזר להיות שווה למספר מכיוון שלא יכולנו לבצע זאת בצורה אחרת כי הלולאה הייתה מאפסת אותו בכל פעם 
			smallnum = num;

	}

	average = average / i;//שווי הממוצע הוא בחילוק האיברים שמרכיבים אותו


	printf("the big number: %d\n the small number is: %d\n the average is: %0.2f", bignum, smallnum, average);

	_getch();

	getchar();
	}*/