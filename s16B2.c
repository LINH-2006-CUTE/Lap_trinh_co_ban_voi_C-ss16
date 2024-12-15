#include <stdio.h>
void swap( int *a, int *b ){
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int main( ){
	int x = 1 , y = 2;
	printf("\n Truoc khi goi ham: ");
	printf("\n x = %d", x);
	printf("\n y = %d", y);
	swap(&x, &y);
	printf("\n\n Sau khi goi ham: ");
	printf("\n x = %d", x);
	printf("\n y = %d", y);
	
	return 0;
}
