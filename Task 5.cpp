#include <stdio.h>
//Task 5

float bill(float cost, int people){
	float tax=0, tip=0, charge=0, total=0;
	
	tax = cost*0.08;
	if(cost >50){
		tip = cost *0.15;
	}else{
		tip = cost * 0.10;
	}
	
	if(people > 6){
	charge = cost * 0.05;
	}
	
	total = tax + tip + charge + cost;
	return total;
}

int main(){
	float cost;
	int people;
	printf("Enter food cost: ");
	scanf(" %f", &cost);
	printf("Enter number of people: ");
	scanf(" %d", &people);

	float total;
	
	total = bill(cost, people);
	printf("Total cost = %.2f", total);
}
