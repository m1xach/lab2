#include <stdio.h>
#include <locale.h>

int main()
{

	int a = 13;
	int b = 3;
	int x;
	float y;
	double z;
	
	x = a / b;
	y = a % b;
	z = a / b;

	printf("%d, %f, %e", (int)a / b, (float)a/b, (double)a/b);

}