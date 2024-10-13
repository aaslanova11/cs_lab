#include <stdio.h>

int main() {
    int n, el;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &el);

    int idx = 0;
    while (idx < n && arr[idx] < el) {
        idx++;
    }

    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }

    arr[idx] = el;

    printf("Position: %d\n", idx);

    printf("New array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
