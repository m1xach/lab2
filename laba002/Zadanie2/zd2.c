#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int N = 20;
	int K = 10;
	printf("������ %d ����� %d �����\n", N, K);
	printf("���� %d ������ �����\n", (N * 60) + K);
	printf("�� �������� �������� %d ���� � %d �����\n", (24 - N), (60 - K));
	printf("� 8.00 ������ %d ������\n", ((N - 8) * 3600) + (K * 60));
	printf("������� ��� = %d/24 �����  � ������� ������ = %d/60 ����", N, K);
	
}