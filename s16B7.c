#include <stdio.h>
void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIndex);
            *(arr + minIndex) = temp;
        }
    }
}

int main() {
    int arr[] = {1,6,4,7,9,2,3,4,3};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

