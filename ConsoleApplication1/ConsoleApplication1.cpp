#define _CRT_SECURE_NO_WARNINGS
//8.	Решить систему из двух линейных уравнений (частные случаи можно не рассматривать).
#include <conio.h>
#include <stdio.h>
#include <locale.h>
void sistema(double& x, double& y)
{
	int a1, b1, a2, b2, c1, c2;
	printf("a1 = "); scanf("%d", &a1);
	printf("b1 = "); scanf("%d", &b1);
	printf("c1 = "); scanf("%d", &c1);
	printf("a2 = "); scanf("%d", &a2);
	printf("b2 = "); scanf("%d", &b2);
	printf("c2 = "); scanf("%d", &c2);
	int d = a1 * b2 - a2 * b1;
	if (d == 0)
	{
		printf("корней нет");
		return;
	}
	x = (c1 * b2 - c2 * b1) / d;
	y = (a1 * c2 - a2 * c1) / d;
}
int main() 
{
	double x = 0, y = 0;
	sistema(x, y);
	printf("x = %lf\ny = %lf", x, y);
	return 1;
}
