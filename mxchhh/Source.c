#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num1;
	int num2;
	int dom;
	puts("������� �����");
	scanf("%d", &num1);
	printf("������� �����: %d\n", num1);
	puts("������� ������ �����\n");
	scanf("%d", &num2);
	printf("�����: %d + %d = %d\n", num1, num2, num1 + num2);
	printf("��������: %d - %d = %d\n", num1, num2, num1 - num2);
	printf("������������: %d * %d = %d\n", num1, num2, num1 * num2);
	printf("������� �� �������: %d / %d = %d\n", num1, num2, num1 / num2);
	printf("������� �� �������: %d %% %d = %d\n", num1, num2, num1 % num2);
	return 1;
}

#include<stdio.h>
#include<locale.h>

int main2()

{

	int dym;
	float result;
	float m = 1.852;
	puts("������� �������� ��� �������");
	scanf("%d", &dym);
	result = (m * dym) / 1000;
	printf("%d ���� � ��� %.1f ��", dym, result);
	return 0

}