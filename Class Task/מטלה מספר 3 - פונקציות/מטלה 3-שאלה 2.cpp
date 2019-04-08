#include <stdio.h>
void power(int mispar, int digit)
{
	int num = 0, sum = 1;
	while (mispar>0)
	{
		if (mispar % 10 == digit) // digit בדיקה אם הספרה שווה ל 
		{
			mispar = mispar / 10;  //הוצאת הספרה
			continue;
	

		}
		else //מעבר על כל המספרים 
		{
			num = num + mispar % 10 * sum; 
			mispar = mispar / 10;
			sum = sum * 10;
		}
	}
	printf("%d\n", num);
}

void main()
{
	int mispar, digit, i;
	for (i = 1; i <= 30; i++)   //קליטת 30 מספרים
	{
		printf("|||||||||||||||||||||||||||||||||||||||||\n");
		printf("Enter %d/30 numbers with no more than 5 digits:\n",i);
		scanf_s("%d", &mispar);
		printf("Enter digit:\n");
		scanf_s("%d", &digit);
		if (mispar >= 0 && mispar <= 99999)  // בדיקה של מספרים בהם יש לא יותר מ- 5 ספרות 
		{
			power(mispar, digit); //שליחה לפונקציה
		}
		else
		{
			printf("pleas enter numbers with no more than 5 digits\n");
		}
	}
	getchar();
	getchar();

}