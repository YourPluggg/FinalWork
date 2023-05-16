#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main()
{

    int x = 0;
    unsigned int summ = 1; // заменили тип данных на unsigned int, так как этот тип может хранить только неотрицательные значения.
    int gg = 1;
    int per = 1;
    int summ2 = 0;
    int n = 1; //найти первый член последующей больше n 
    float eps = 0.001;
    printf("%s", "Enter X:\n");
    scanf_s("%f", &x);

    if (x < 0) {
        printf("%s", "Error: X must be positive");
        return 0;
    }

    summ2 = cos(x);

    gg *= -x * x / (2.0 * n - 1.0) / (2.0 * n);


    while (fabs(gg) > eps) //Вычисляет суммы ряда в формуле Тейлора для функции cos(x) с заданной точностью eps. 
    {
        summ += gg;
        n++;
        for (int i = 1; i <= 2 - n; i++)
        {
            per *= i;
        }

        gg += pow(-1.0, n) * pow(x, 2 * n) / per;

    }

    printf("%u", summ);
    printf("\n%f", summ2);

    getchar();
    getchar();
}