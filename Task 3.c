#include <stdio.h>
// Task 3

int alert(Temp){
	int code;
	if(Temp > 35){
		printf("HEAT ALERT.\n");
		code = 1;
	}else if(Temp <10){
		printf("COLD ALERT.\n");
		code = 2;
	}else if(Temp <25 && Temp>15){
		printf("COMFORT ZONE.\n");
		code = 3;
	}else{
		printf("NORMAL CONDITIONS.\n");
		code = 4;
	}
	printf("Code %d.", code);
	return  code;
}

int main(){
	
	int temp, code;
	printf("Enter temp in Celcius: ");
	scanf(" %d", &temp);
	
	code = alert(temp);
	
	return  0;
}
