#include <stdio.h>

int ispolnitel(int num) {
    int a = num / 100; // первая цифра
    int b = (num / 10) % 10; // вторая цифра
    int c = num % 10; // третья цифра
    int ab = a * b; // произведение первой и второй цифры
    int bc = b * c; // произведение второй и третьей цифры
    if (bc > ab) { // проверяем, какое из произведений больше
        int temp = ab;
        ab = bc;
        bc = temp;
    }
    int result = ab * 100 + bc; // объединяем произведения в новое число
    return result;
}

int main() {
    int num;
    printf("Введите трехзначное число: ");
    scanf("%d", &num);
    int result = ispolnitel(num);
    printf("Результат работы исполнителя: %d\n", result);
    return 0;
}
