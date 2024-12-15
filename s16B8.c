#include <stdio.h>
#include <string.h>
int main(){
    char arr[50];
	char  reArr[50];
    int j = 0;
    
    printf("\nNhap chuoi: ");
    fgets(arr, sizeof(arr), stdin);

    int len = strlen(arr);
    if (arr[len - 1] == '\n'){
        arr[len - 1] = '\0';
        len--;
    }
    
    char *ptr = arr;
    
    for (int i = len - 1; i >= 0; i--){
        reArr[j++] = *(ptr + i);
    }
    
    printf("\nChuoi input: ");
    for (int i = 0; i < len; i++){
        printf("%c", arr[i]);
    }

    printf("\nChuoi reverse: ");
    for (int i = 0; i < len; i++){
        printf("%c", reArr[i]);
    }

    printf("\n");
    return 0;
}
 
