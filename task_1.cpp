#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Введите числа a, b, c, d: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int x = (a + d - c % d) % d + c;  //вычисляем x = наименьшее число от a до b, дающее остаток c при делении на d
    while (x <= b) {  //перебираем все числа от x до b
        printf("\n%d\n", x);
        x += d;  //следующее число, дающее остаток c при делении на d
    }


    return 0;
}

