#include <stdio.h>
#define _USE_MATH_DEFINES
#include <locale.h>
#include <math.h>
#define T -6
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

int rest()
{
	setlocale(LC_ALL, "rus");
	double gr, r, p;
	printf("Введите значение в градусах: \n");
	scanf("%lf", &gr);
	p = gr * M_PI / 180;
	r = sin(p);
	printf("Синус %.1f градусов = %lf", gr, r);

	return 0;
}


int reft()
{
	double x, y, a, b;
	setlocale(LC_ALL, "rus");
	printf("Введите x: \n");
	scanf("%lf", &x);
	a = log(x);
	b = sqrt(x * x + T * T);
	y = pow(fabs(a - b * x), 1 / 5.f);
	printf("a = %f, b = %f , y = %.4f", a, b, y);
	return 0;
}

int pot()
{
	setlocale(LC_ALL, "rus");
	int yeas;
	printf("введие год:\n");
	scanf("%d", &yeas);
	if (yeas % 4 == 0 && yeas % 100 != 0) {
		printf("Год %d високосный", yeas);
	}
	else {
		printf("Год %d невисокосный", yeas);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	double v, f;
	printf("Введите x: \n");
	scanf("%lf", &v);
	f = (v <= 3) ? (v * v - 3 * v + 9) : (1 / (v * v * v + 6));
	printf("F(%.0f) = %.6f", v, f);
	return 0;
}
// x = 2 => x < 3 => f(2) = 2 * 2 - 3 * 2 + 9 = 7
// x = 5 => x > 3 => f(5) = 1 / (5 * 5 * 5) + 6 = 1 / 131 = 0,007634