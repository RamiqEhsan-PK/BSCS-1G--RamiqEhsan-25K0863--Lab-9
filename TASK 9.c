#include <stdio.h>
//Task 9
int main(){
	int a=100, b=200,c=300;
	int* x=&a, *y=&b, *z=&c;
	
	printf("ptr1: %d. ptr2: %d. ptr3: %d.\n\n", *x, *y, *z);
	
	x =&b;
	y=&c;
	z=&a;
	
	printf("Swap.\n\n");
	printf("ptr1: %d. ptr2: %d. ptr3: %d.\n\n", *x, *y, *z);
	
	printf("Add 50, subtract 20, multiply by 3.\n\n");
	*x = (*x+50-20)*3;
	*y = (*y+50-20)*3;
	*z = (*z+50-20)*3;
	
	x=&c;
	y=&a;
	z=&b;
	printf("ptr1: %d. ptr2: %d. ptr3: %d.\n", *x, *y, *z);
	
	return 0;
}

