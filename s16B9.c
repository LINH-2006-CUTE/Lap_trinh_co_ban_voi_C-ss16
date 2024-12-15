#include <stdio.h>
void addElement(int arr[], int *size, int newValue, int index){
    if (index < 0 || index > *size) {
        printf("Nhap lai:\n");
        return;
    }
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = newValue;
     	(*size)++;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,};
    int size;
    int newValue, index;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &newValue);
    printf("Nhap vi tri muon them: ", size);
    scanf("%d", &index);
    addElement(arr, &size, newValue, index);
    printf("Mang moi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    

    return 0;
}
