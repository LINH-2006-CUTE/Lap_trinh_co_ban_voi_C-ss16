#include <stdio.h>
int delete(int *arr, int n, int index){
    if (index < 1 || index > n) {
        printf("Vi tri khong hop le.\n");
        return n;
    }
    for (int i = index - 1; i < n - 1; i++){
        *(arr + i) = *(arr + i + 1);
    }
    return n - 1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int index;
    printf("\nTruoc khi xoa: ");
    for (int i = 0; i < n; i++){
        printf("\t%d", arr[i]);
    }
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &index);
    n = delete(arr, n, index);
    printf("\nSau khi xoa: ");
    for (int i = 0; i < n; i++){
        printf("\t%d", arr[i]);
    }



    return 0;
}
