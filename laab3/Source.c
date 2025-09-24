#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 3;
	float f = 3.14f;
	double d = 5e-12;
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %.2f\n", f);
	printf("double d = %.2e\n", d);

	printf("Введите char\n");
	scanf("%c", &c);
	printf("Введите int\n");
	scanf("%d", &i);
	printf("Введите float\n");
	scanf("%f", &f);
	printf("Введите double\n");
	scanf("%lf", &d);

	printf("Ваши значения:\n");
	printf("char c = %c\n", c);
	printf("float f = %.2f\n", f);
	printf("double d = %.2e\n", d);
}