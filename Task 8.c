#include <stdio.h>

int main(){
	
	int Num[7]= {10,20,30,40,50,60,70}; 
	int* ptr=&Num[0];
	
	printf("*ptr: %d\n", *ptr);
	printf("*(ptr+3): %d\n", *(ptr+3));
	printf(" ptr[2]: %d\n", ptr[2]);
	ptr=ptr+4;
	printf(" After ptr + 4: %d\n", *ptr);
	
	int* ptr2 = &Num[5];
	
	printf(" ptr[1]: %d\n", ptr[1]);
	printf("*ptr2: %d\n", *ptr2);
	printf("ptr2[-2]: %d\n", ptr2[-2]);

	
	
	return 0;
}
