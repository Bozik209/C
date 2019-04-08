#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
void DollaRrate(float *dollar, float change) //חישוב שער הדולר
{
	*dollar += (*dollar *(change / 100));
}
void main() 
{
	float dollar = 3.5670462 , change, historydollar, todaydollar, diffrence;
	int dollarnum, i;

	printf("how many dollars you buy?\n");
	scanf_s("%d", &dollarnum);
	printf("What is the rate of the dollar??\n");
	scanf_s("%f", &change);
	DollaRrate(&dollar, change);
	todaydollar = dollarnum * dollar; //חישוב הדולר ביום הקנייה

	for (i = 0; i < 10; i++) //קליטת 10 יומים
	{
		printf("What is the rate of the dollar in day %d?\n", i+1);
		scanf_s("%f", &change);
		DollaRrate(&dollar, change);
	}

	historydollar = dollarnum * dollar;
	diffrence = historydollar - todaydollar; //חיושב ההפרש
	printf("The diffrence: %.2f\n", diffrence);
	getchar();
	getchar();

}