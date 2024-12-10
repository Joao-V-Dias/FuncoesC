#include <stdio.h>

int contarPares(int a, int b, int c) {
    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    return count;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", contarPares(a, b, c));
    return 0;
}

