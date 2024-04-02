#include <stdio.h>

int main() {
    int arr[12];
    int shiftedArr[12];
    int shift = 4;

    printf("Введите 12 целых чисел через пробел: ");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 12; i++) {
        shiftedArr[(i + shift) % 12] = arr[i];
    }

    for (int i = 0; i < 12; i++) {
        printf("%d ", shiftedArr[i]);
    }
    printf("\n");

    return 0;
}