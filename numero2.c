#include <stdio.h>

int maiorNumero(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", maiorNumero(x, y));
    return 0;
}

