#include <stdio.h>
//TASK 6

float taxes(float* income){
	float tax=0, final=0;
	if (*income <= 20000 && *income >=0){
		tax = 0;
	}else if(*income <=50000){
		tax = (*income-20000)*0.1;
	}else{
		tax = ((*income-50000)* 0.2) + ((30000*0.1));
	}
	*income = *income -tax;
	return tax;
	
}

int main(){
	float income, tax;
	printf("Enter income: ");
	scanf(" %f", &income);
	
	tax = taxes(&income);
	printf("Taxes = %.2f\n", tax);
	printf("Net income = %.2f", income);
	
	
	return 0;
}
