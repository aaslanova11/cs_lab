#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != min && arr[i] != max) {
            printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}