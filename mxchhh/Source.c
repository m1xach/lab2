#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num1;
	int num2;
	int dom;
	puts("введите число");
	scanf("%d", &num1);
	printf("введено число: %d\n", num1);
	puts("введите второе число\n");
	scanf("%d", &num2);
	printf("Сумма: %d + %d = %d\n", num1, num2, num1 + num2);
	printf("Разность: %d - %d = %d\n", num1, num2, num1 - num2);
	printf("Произведение: %d * %d = %d\n", num1, num2, num1 * num2);
	printf("Частное от деления: %d / %d = %d\n", num1, num2, num1 / num2);
	printf("Остаток от деления: %d %% %d = %d\n", num1, num2, num1 % num2);
	return 1;
}

#include<stdio.h>
#include<locale.h>

int main2()

{

	int dym;
	float result;
	float m = 1.852;
	puts("Введите значение для расчета");
	scanf("%d", &dym);
	result = (m * dym) / 1000;
	printf("%d миль – это %.1f км", dym, result);
	return 0

}