#include<stdio.h>
#include<conio.h>
void main()
{
	///*int speed, km;*/
	float time, speed, km;
	printf_s("Please enter your km/h:\n");
	scanf_s("%f", &speed);
	printf_s("Please enter your distance:\n");
	scanf_s("%f", &km);
	time = (speed / km) * 60;
	printf_s("Arrival time is:%2.f min", time);
	getchar();
	getchar();
	main();
}


//kmh