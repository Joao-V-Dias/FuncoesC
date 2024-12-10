#include <stdio.h>

void divisores(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    divisores(n);
    return 0;
}

