#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#define size 81
void first_func(char str[size])
{
	int i, j;
	printf("enter str\n");
	for (i = 0; i < size; i++)
	{
		scanf_s("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	for(i = 0; i < size; i++) //אני לא יודע למה אבל זה לא עובד אם אני עושה קליטה עם ללואה אחת
	{
		scanf_s("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}	
	for (i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	puts("\n");
	for (i = 0; i < strlen(str); i += 2)  //הדפסה של תו לפי המספר
	{

		for (j = 0; j < str[i + 1] - 48; j++)  
		{
			printf("j:%d for j:%c\n", j + 1, str[i]);
		}
	}

}

void sec_func(char str[size])
{
	int i, num = 0;
	printf("enter str\n");
	for (i = 0; i < size; i++)
	{
		scanf_s("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	for (i = 0; i < size; i++) //אני לא יודע למה אבל זה לא עובד אם אני עושה קליטה עם ללואה אחת 
	{
		scanf_s("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	num = atoi(str);
	printf("%d", num);
}

void three_func(char str[size])
{
	int i, j=0;
	char letter;
	for (i = 0; i < size; i++) 
	{
		scanf_s("%c", &str[i]); //קלטיה של המחרוזת
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	for (i = 0; i < size; i++)  //אני לא יודע למה אבל זה לא עובד אם אני עושה קליטה עם ללואה אחת
	{
		scanf_s("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}

	printf_s("choose leeter:\n"); //קליטת התו
	scanf_s("%c", &letter);

	for (i = 0; i < strlen(str); i++)   //בדיקה של האותיות גם גדולה וגם קטנה
	{
		if ((str[i]!=letter) && (str[i]!=toupper(letter)) && (str[i]!=tolower(letter)))
		{
			str[j] = str[i];
			j++;
		}
	}
	for (i = 0; i < strlen(str); i++)  //אני לא יודע למה אבל זה לא עובד אם אני עושה קליטה עם ללואה אחת
	{
		if ((str[i] != letter) && (str[i] != toupper(letter)) && (str[i] != tolower(letter)))
		{
			str[j] = str[i];
			j++;
		}
	}
	printf("new str is:\n %c\n");
	puts(str);
}

void main()
{
	int i, j, choose = 0, num = 0;
	char str[size];
	printf_s("enter choose:\n");
	printf_s("1: first question\n");
	printf_s("2: second question\n");
	printf_s("3: three question\n");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
		puts("you choose 1");
		first_func(str);
		break;
	case 2:
		puts("you choose 2");
		sec_func(str);
		break;
	case 3:
		puts("you choose 3");
		three_func(str);
		break;
	default:
		printf("worng choose\n");
		break;

	}
	getchar();
}