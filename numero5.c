#include <stdio.h>

float somaPA(int a1, int an, int n) {
    return n * (a1 + an) / 2.0;
}

int main() {
    int a1, an, n;
    scanf("%d %d %d", &a1, &an, &n);
    printf("%.2f\n", n, somaPA(a1, an, n));
    return 0;
}

