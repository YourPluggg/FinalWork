#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main()
{

	float x = 0;
	float summ = 1;
	float gg = 1;
	float per = 1;
	float summ2 = 0;
	int n = 1;
	float eps = 0.001;
	printf("%s", "Enter X:\n");
	scanf_s("%f", &x);
	summ2 = cos(x);

	gg *= -x * x / (2.0 * n - 1.0) / (2.0 * n);


	while (fabs(gg) > eps)
	{
		summ += gg;
		n++;
		for (int i = 1; i <= 2 - n; i++) 
		{
			per *= i; 
		}

		gg += pow(-1.0, n) * pow(x, 2 * n) / per;

	}
	printf("%f", summ );
	printf("\n%f", summ2);

	getchar();
	getchar();
}