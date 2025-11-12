#include <stdio.h>

float Rent(float days, float km){
	
	float cost;
	
	cost = days*40;
	
	if(km >100){
		cost = cost + (km-100)*0.25*days;
	}
	
	if (days > 7){
		cost = cost*0.9;
	}
	return cost;
}

int main(){
	
	float days, km, cost;
	
	printf("Enter rental days: ");
	scanf(" %f", &days);
	printf("Enter kilometers driven: ");
	scanf(" %f", &km);
	
	cost = Rent(days,km);
	printf("Total cost = %.2f", cost); 
	return 0;
}
