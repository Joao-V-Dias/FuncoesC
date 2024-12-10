#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    return c * m * t / 100.0;
}

int main() {
    float c, t;
    int m;
    scanf("%f %d %f", &c, &m, &t);
    printf("%.2f\n", calcularJuros(c, m, t));
    return 0;
}

