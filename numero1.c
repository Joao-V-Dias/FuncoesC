#include <stdio.h>

float calcularDelta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f\n", calcularDelta(a, b, c));
    return 0;
}

