# hw-6-c
finally

#### Task 1
C помощью функции `scanf` считываются четыре целых числа `a`, `b`, `c` и `d`. Далее вычисляется первое число `x`, которое даёт остаток `c` при делении на `d` и находится в диапазоне от `a` до `b`. Это можно сделать так: `(a + d - c % d) % d + c`.

В цикле while перебираются все числа от `x` до `b`, которые дают остаток `c` при делении на `d`. Чтобы перебирать только такие числа, мы после каждой итерации добавляем к `x` значение `d`.

Каждое число, которое удовлетворяет условию задачи, выводится с помощью функции `printf`.

#### Task 2
Функция `join` принимает массив из строк `words` и его размерность `n`. Она выделяет память под итоговую строку `result`, которая является пустой строкой. Затем с помощью цикла `for` добавляет каждое слово из массива `words` в конец строки `result` с помощью функции `strcat`. Если текущее слово не является последним словом массива, то в конец строки добавляется пробел.

Функция `join` возвращает указатель на итоговую строку.

В `main` определяются массив строк `words` и его размерность `n`. Затем вызывается функция `join` для объединения слов из массива `words`, и результат выводится с помощью `printf`. В конце освобождается выделенная под результат память.

#### Task 3
C помощью функции `scanf`число  и сохраняет в переменной `n`.

Далее программа инициализирует переменные: `f0` устанавливается равной 0, `f1` устанавливается равной 1, а переменная `i` устанавливается в 2.

Далее, входит в цикл `while`, который выполняется пока переменная `i` меньше или равна `n`. На каждой итерации цикла программа вычисляет следующее число Фибоначчи путем сложения двух предыдущих чисел и сохраняет его в переменной `fn`. Затем переменные `f0` и `f1` обновляются соответственно - `f0` устанавливается равной `f1`, а `f1` равной `fn`. Переменная `i` увеличивается на единицу.

После выполнения цикла выводится значение переменной `fn`, которая равна `n`-ому числу Фибоначчи.

#### Task 4
Функция `sumDigits` принимает указатель на целое число `num`. Внутри функции определяется переменная `sum`, которая будет хранить сумму цифр. Далее сохраняется значение, на которое указывает указатель `num`, чтобы не изменять его напрямую. Затем с помощью цикла `while` выделяются всe цифры числа. Каждая цифра добавляется к сумме `sum`, а затем отбрасывается с помощью операции деления на 10. Когда все цифры числа будут обработаны, функция вернет сумму `sum`.

В `main` объявляется переменная `num`. Затем с помощью `scanf` считывается значение `num`. Затем вызывается функция `sumDigits`, которая вычисляет сумму цифр числа `num`. Эта сумма выводится с помощью `printf`.

#### Task 5
Функция `ispolnitel` принимает на вход число `num`. Внутри функции извлекаются цифры `a`, `b` и `c` из `num`. Затем вычисляются произведения `ab` и `bc`. Если `bc` оказывается больше `ab`, то произведения меняют местами. Затем полученные произведения объединяются в новое число `result` в порядке невозрастания.

В `main` объявляется переменная `num`. Затем с помощью `scanf` считывается значение `num`. Затем вызывается функция `ispolnitel`, которая вычисляет результат работы исполнителя. Этот результат выводится с помощью `printf`.