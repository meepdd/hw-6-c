#include <stdio.h>

int sumDigits(int *num) {
    int sum = 0;
    int n = *num; // сохраняем значение указателя для безопасного обращения
    while (n != 0) {
        sum += n % 10; // добавляем к сумме последнюю цифру числа
        n /= 10; // отбрасываем последнюю цифру числа
    }
    return sum;
}

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    int sum = sumDigits(&num);
    printf("Сумма цифр числа %d равна %d\n", num, sum);
    return 0;
}
