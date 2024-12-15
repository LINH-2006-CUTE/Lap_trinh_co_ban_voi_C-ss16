#include <stdio.h>
int sum; 
void calSum(int a, int b) {
    sum = a + b; 
}
int main() {
    int num1 = 5; 
    int num2 = 15; 
    calSum(num1, num2);

    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
    return 0;
}
