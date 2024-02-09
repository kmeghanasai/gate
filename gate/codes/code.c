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

    // Open the file for writing
    FILE *fp = fopen("code.dat", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write the output to the file
    fprintf(fp, "%d\n", sum);

    // Close the file
    fclose(fp);

    return 0;
}

