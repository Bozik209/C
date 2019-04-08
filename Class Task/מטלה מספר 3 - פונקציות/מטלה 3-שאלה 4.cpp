#include <stdio.h>
#include <conio.h>
int power(int num)
{
	int i, result = 1; // חישוב המספרים
	for ( i =1; i <=num; i++)
	{
		result = result * i;
	}
	return result;
}
void main()
{
	int i,j,nLines,k;
	printf("Enter a number smaller than 20\n");
	scanf_s("%d", &nLines);
	if (nLines<=20) // התנאי שהמספר יהיה קטן מ-20
	{
	for ( i = 0; i < nLines; i++) // הלולאות שיוצרות את המשולש
	{
		for ( j = 0; j <= nLines -i-1 ; j++)
		{
			printf(" ");
		}
		for ( j = 0; j <=i; j++)
		{
			k = power(i) / (power(j) * power(i - j)); // שליחה לפונקציה
			printf("%2d",k);
		}
		printf("\n");
	}
	}
	else
	{
		printf("Worng the number is biger than 20\n");
	}
	getchar();
	getchar();
}