#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");

    int n = 5; 
    int arr[n];
    printf("Введіть до 5-ть елементів вектора): ");
    for (int i = 0; i < n; i += 1) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    int minkilkist = 0, maxkilkist = 0;
    int minSum = 0, maxSum = 0;

    for (int i = 0; i < n; i+=1) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < n; i+=1) {
        if (arr[i] == min) {
            minkilkist += 1;
            minSum += arr[i];
        } 
        if (arr[i] == max) {
            maxkilkist += 1;
            maxSum += arr[i];
        }
    }

    printf("1)Мінімальне значення: %d,\n Кількість: %d,\n Сума: %d\n", min, minkilkist, minSum);
    printf("2)Максимальне значення: %d,\n Кількість: %d,\n Сума: %d\n", max, maxkilkist, maxSum);

    return 0;
}