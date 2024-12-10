#include <stdio.h>
#include <math.h>

void resolverEquacao(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("A raiz e unica: %.2f\n", x);
    } else {
        printf("Não existem raizes.\n");
    }
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    resolverEquacao(a, b, c);
    return 0;
}

