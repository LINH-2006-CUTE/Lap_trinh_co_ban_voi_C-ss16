#include <stdio.h>

void show( int *arr , int n ){
	for( int i = 0; i< n ; i++){
		printf("\t%d", *(arr +i));
	}
}

int main( ){
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr) / sizeof(int);
	show(arr, n);
	
	return 0;
}
