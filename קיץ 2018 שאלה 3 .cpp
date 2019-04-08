#include <stdio.h>
#include <stdlib.h>
int *max_seq(int *vec, int size){
	int i,num=0,place=0,numOfArr=0;
	int arr[3] = { 0,0,0 };
	for ( i = 0; i < size; i++)
	{
		num += vec[i];
		numOfArr++;
		if (0>num)
		{
			num = 0;
			place = i + 1;
			numOfArr = 0;
		}
	}
	arr[0] = place;
	arr[1] = numOfArr;
	arr[2] = num;
	for ( i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	return arr;

}
void main()
{
	int vec[] = { 1,2,3,4,-11,5,6,7,8,9 }, size = 10;	max_seq(vec, size);
	getchar();
}
	//int vec[] = { 1,2,3,4,-9,5,6,7,8,9 },size=10;