#include <stdio.h>
void main()
{
	int *arr, a[10], *b, c[3][5], *d[10], e, *q, i;
	arr = &i;
	arr = a;
	a = arr;//לא חוקי
	q = arr = d[0];
	arr = c[2];
	b = c; //לא חוקי
	a[7] = *(*(c + 2) + 3);
	*a = 2 + &b;//לא חוקי
	a[5] = q[0];
	*q = *a;
	q = a++;//לא חוקי
	a = b;//לא חוקי
	b = a + 3;
	a = *b;//לא חוקי
	b = &e;
	*b = *a;
	b = c[3];
	b = &a;//לא חוקי
	*a = *b;
}
