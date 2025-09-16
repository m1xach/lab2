#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int N = 20;
	int K = 10;
	printf("Сейчас %d часов %d минут\n", N, K);
	printf("Идет %d минута суток\n", (N * 60) + K);
	printf("До полуночи осталось %d часа и %d минут\n", (24 - N), (60 - K));
	printf("С 8.00 прошло %d секунд\n", ((N - 8) * 3600) + (K * 60));
	printf("Текущий час = %d/24 суток  и текущая минута = %d/60 часа", N, K);
	
}