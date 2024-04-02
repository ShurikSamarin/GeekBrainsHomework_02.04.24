#include <stdio.h>

int main() {
    int arr[10];
    int newArr[10];
    int count = 0;

    printf("Введите 10 целых чисел через пробел: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        // Проверяем вторую с конца цифру
        int secondLastDigit = (arr[i] / 10) % 10;
        if (secondLastDigit == 0) {
            newArr[count] = arr[i];
            count++;
        }
    }

    printf("Числа с нулевой второй с конца цифрой: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}