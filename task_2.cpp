#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 255

char* join(char* words[], int n) {
    char* result = (char*)malloc(MAX_LEN); // выделяем память под итоговую строку
    result[0] = '\0'; // объявляем пустую строку
    for (int i = 0; i < n; i++) {
        strcat(result, words[i]); // добавляем следующее слово в конец строки
        if (i != n - 1) {
            strcat(result, " "); // добавляем пробел между словами
        }
    }
    return result;
}

int main() {
    char* words[] = {"Hello", "world!", "How", "are", "you?"};
    int n = sizeof(words) / sizeof(char*);
    char* result = join(words, n);
    printf("%s\n", result);
    free(result); // освобождаем память
    return 0;
}
