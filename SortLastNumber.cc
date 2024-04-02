#include <stdio.h>
#include <stdlib.h>

// Функция для сравнения двух чисел по последней цифре
int compareByLastDigit(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 % 10) - (num2 % 10);
}

int main() {
    int arr[10];

    printf("Введите 10 целых чисел через пробел: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка массива по последней цифре
    qsort(arr, 10, sizeof(int), compareByLastDigit);

    printf("Отсортированный массив по последней цифре:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}