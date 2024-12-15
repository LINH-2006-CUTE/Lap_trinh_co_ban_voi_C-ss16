#include <stdio.h>
void capNhatPhanTu(int* arr, int newArr, int index){
    arr[index] = newArr;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    newArr(arr, 10, 2);
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

