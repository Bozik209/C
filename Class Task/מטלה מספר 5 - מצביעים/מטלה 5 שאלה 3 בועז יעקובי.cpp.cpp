#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10
void vote(int arr[], char employeeName[][8])
{
	int i, choose, employeeNumber = 0;
	printf("Insert employee number\n");
	scanf_s("%d", &employeeNumber);
	while (employeeNumber != 999) //יציאה בעבוד 999
	{
		for (i = 0; i < size; i++) //קליטת ההצבעות
		{
			printf("Would you like to vote for %s\n 1 for yes \n 0 for no\n", *(employeeName + i));
			scanf_s("%d", &choose);
			if (choose == 1)
				*(arr + i) += 1;
		}
		system("cls"); 
		printf("Insert employee number\n", employeeNumber);//קליטת מספר עובד
		scanf_s("%d", &employeeNumber);
		continue;
	}
	for (i = 0; i < size; i++) //הצגת כמות ההצבעות הכוללת
		printf("vote for %s \t %d\n", *(employeeName + i), *(arr + i));  

}
void win_check(int arr[], char employeeName[][8])  //פונקצית בדיקת מנצח
{
	int i,first=0,sec=0, Third=0, firstcnt=0, seccnt=0, Thirdcnt=0;
	for ( i = 0; i < size; i++)
	{
		if (*(arr + i) > first) //בדיקת מקום ראשון
		{
			first = *(arr + i);
			firstcnt = i;
		}
	}
	for (i = 0; i < size; i++) //בדיקת מקום שני
	{
		if (*(arr + i) > sec && i != firstcnt)
		{
			sec = *(arr + i);
			seccnt = i;
		}
	}	
	for (i = 0; i < size; i++) //בדיקת מקום שלישי
	{
		if (*(arr + i) > Third && i != seccnt && i != firstcnt)
		{
			Third = *(arr + i);
			Thirdcnt = i;
		}
	}
	printf("first place %d %s \n", first, *(employeeName + firstcnt));
	printf("second place %d %s \n", sec, *(employeeName + seccnt));
	printf("Third place %d %s \n",Third, *(employeeName + Thirdcnt));
}

void main()
{
	int arr[size] = { 0 };
	char employeeName[10][8] = { { "Natan" },{ "David" },{ "Yoav" },{ "Shayke" },{ "Irit" },
	{ "Arik" },{ "Eliya" },{ "Matan" },{ "Lea" },{ "Lina" } };
	srand(time(NULL));
	vote(arr, employeeName);
	win_check(arr, employeeName);
	getchar();
	getchar();
}