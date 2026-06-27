#include <stdio.h>

int main() {
    float basic, hra, da, total;

    scanf("%f", &basic);

    hra = basic * 0.2;
    da = basic * 0.1;
    total = basic + hra + da;

    printf("Total Salary = %.2f", total);

    return 0;
}