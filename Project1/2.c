#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    double x, F;
    setlocale(LC_ALL, "RUS");
    printf("¬ведите x: ");
    scanf("%lf", &x);

    double F = (x >= 8) ? (-pow(x, 2) + x - 9) : (1 / (pow(x, 4) - 6));

    printf("F(%.2f) = %.4f\n", x, F);

    return 0;
}
// контрольный пример: вводим 8 получаем -65,0000
// контрольный пример: вводим 2 получаем 0,1000
// контрольный пример: вводим -1 получаем 
