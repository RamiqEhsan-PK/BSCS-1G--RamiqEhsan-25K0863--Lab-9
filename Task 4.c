#include <stdio.h>
//Task 4

int shipping(int amount, int weight){
	int cost;
	if(amount > 100){
		cost = amount;
	 }else if( weight < 2){
	 	cost = amount + 10;
	 }else if(weight <=5){
	 	cost = amount + 15;
	 }else{
	 	cost = amount + 20;
	 }
	
	printf("Total cost = %d", cost);
	return cost;
}

int main(){
	
	int amount, weight, cost;
	
	printf("Enter amount :");
	scanf(" %d", &amount);
	
	printf("Enter weight :");
	scanf(" %d", &weight);
	
	cost = shipping(amount, weight);
}
