#include <stdio.h>
int search(int *arr, int n, int num){
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == num) {
            return i + 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int num;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &num);
    int i = search(arr, n, num);
    if (i != -1) {
        printf("\nVi tri cua ptu can tim: %d", i);
    } else {
        printf("\nPhan tu khong tim thay trong mang.");
    }




    return 0;
}
