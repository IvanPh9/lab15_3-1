#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale>
int main() {
    setlocale(LC_CTYPE, "ukr"); //Українізація

    int size, i; // Змінні для розміру масиву та індексу циклу
    printf("Введiть розмiр масиву\n"); // Повідомлення користувачеві
    scanf_s("%d", &size); // Введення розміру масиву від користувача


    // Виділення пам'яті для масиву
    int* array = (int*)malloc(size * sizeof(int));

    printf("Введiть елементи масиву\n");
    // Заповнення масиву елементами
    for (i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    printf("Елементи масиву: ");
    // Обнулення парних елементів масиву
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
        printf("[%d] ", array[i]);
    }
    free(array); // Звільнення пам'яті
    return 0;
}