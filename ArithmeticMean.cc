#include <stdio.h>

int main() {
    int arr[5];
    double sum = 0;

    printf("Введите 5 целых ненулевых чисел через пробел: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = sum / 5;
    printf("%.3f\n", average);

    return 0;
}