// cach 1: 

//#include <stdio.h>
//int main(){
//    int a = 10;
//    printf("Gia tri cua a: %d\n", a);
//    printf("Dia chi cua a: %p\n", &a);
//    return 0;
//}



#include <stdio.h>
int main(){
    int a = 1;
    int *ptr = &a;
    printf("Gia tri cua a(cach1): %d\n", a);
    printf("Gia tri cua a qua con tro(cach2): %d\n", *ptr);
    printf("Dia chi cua a(cach2): %p\n", &a);
    printf("Dia chi cua a qua con tro(cach2): %p\n", ptr);
    return 0;
} 
