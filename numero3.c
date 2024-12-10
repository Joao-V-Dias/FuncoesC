#include <stdio.h>

void imprimirNumeros(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    imprimirNumeros(n);
    return 0;
}

