#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 5
void fill(int str[][size])
{
	int i, j;
	for ( i = 0; i < size; i++)
	{
		for ( j = 0; j < size; j++)
		{
			str[i][j]=rand() % 2;
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%3d", str[i][j]);
		}
		printf("\n");
	}
}
void chack(int str[][size])
{ 
	int i, j,cnt1=0,cnt2=0,max1=0,max2=0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((str[i][j] == 1) && (str[i][j + 1] == 1))	//	בדיקת השורות 
				cnt1++;
			if ((str[i][j] == 1) && (str[i + 1][j] == 1)) //	בדיקת העמודות 
				cnt2++;
		}
		if (max1<cnt1)
		{
			max1 = cnt1;
			cnt1 = 0;
		}
		if (max2<cnt2)
		{
			max2 = cnt2;
			cnt2 = 0;
		}
	}
	printf("The cnt1=%d\n", max1);
	printf("The cnt2=%d\n", max2);

}
void main()
{
	int str[size][size];
	srand(NULL(time));
	fill(str);
	chack(str);
	getchar();
	main();
}