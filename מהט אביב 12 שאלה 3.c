#include <stdio.h>
#include <string.h>
int fillstr(char *str,int len)
{
	int i;
	for (i = 0; i < len; i++)
	{

		if ((*(str + i) != '{') && (*(str + i) != '}') && (*(str + i) != '(') && (*(str + i) != ')')) // check if is () 
		{
			return 0;
		}
	}
	return 1;
}
int check(char *str, int len)
{
	int i, j,cnt1=0,cnt2=0;
	for ( i = 0; i < len/2; i++)
	{
		//if (((*(str + i) == '{') && (*(str + len - i - 1) == '}')) && ((*(str + i) == '(') && (*(str + len - i - 1) == ')')))
		//{
		//	return 0;
		//}

		if (*(str + i) == '{')
		{
			cnt1++;
		}
		if (*(str + i) == '(')
		{
			cnt2++;
		}

		if (*(str + i) == '}')
		{
			cnt1--;
		}
		if (*(str + i) == ')')
		{
			cnt2--;
		}
	}
	printf("cnt1 { %d   cnt2 ( %d\n", cnt1, cnt2);
	//check
	if (cnt2!=cnt1)
	{
		return 0;
	}
	return 1;

}
void main()
{
	printf("\n-------------------------------\n");

	int len;
	char str[40];
	gets_s(str);
	printf("%s\n", str);
	len = strlen(str);
	printf("len %d\n", len);

	if (fillstr(str, len))
	{
		printf("the input is good\n");
		if (check(str, len))
		{
			printf("the string is legal");
		}
		else
		{
			printf("the string is Illegal!!!");
		}
	}
	else
	{
		printf("the input is bad\n");
	}
	main();
	getchar();


}