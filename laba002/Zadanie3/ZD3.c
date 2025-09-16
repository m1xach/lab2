#include <stdio.h>
#include <locale.h>
int main()
//17
{
	setlocale(LC_ALL, "Rus");
	float L = 33;
	float n = 3;
	int k = 2;
	int m = 2;
	printf("Дано:\n\t%5.0f\n\t%5.0f\n\t_______\nОтвет:\n\t+%09.4f", n, L, n/L);

}