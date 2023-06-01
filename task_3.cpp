#include <stdio.h>

int main() {
    int n;
    printf("Введите номер числа Фибоначчи: ");
    scanf("%d", &n);

    int f0 = 0, f1 = 1, fn, i = 2;
    while (i <= n) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        i++;
    }

    printf("%d\n", fn);

    return 0;
}
