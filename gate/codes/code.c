#include <stdio.h>
#include <math.h>
#include <complex.h>

#define PI 3.14159265359

int main() {
    double complex a[] = {1, 3 * I, 2 * I, -2 * I, -3 * I};
    int sum = 0;

    for (int n = 0; n < 5; ++n) {
        double sin_val = sin(4 * PI * n / 5);
        double complex term = 0;

        for (int k = 0; k < 5; ++k) {
            term += a[k] * cexp(2 * PI * k * n / 5 * _Complex_I);
        }

        sum += (int)(creal(term) * sin_val);
    }

    printf("%d\n", sum);

    return 0;
}

