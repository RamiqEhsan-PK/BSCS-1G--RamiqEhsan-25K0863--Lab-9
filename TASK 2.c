#include <stdio.h>
//TASK 2

int evaluate(int math, int physics, int english){
	int average;
	
	average = (math + physics + english) / 3;
	
	if (average < 50){
		printf("FAIL. Average < 50.\n");
	}else if (math < 40 || english < 40 || physics < 40){
		printf("FAIL. Not all 3 subjects cleared.\n");
	}else{
		printf("PASS.\n");
	}
	return average;
	
}


int main(){
	int math, english, physics, average;
	printf("Enter math score: ");
	scanf(" %d", &math);
	printf("Enter physics score: ");
	scanf(" %d", &physics);
	printf("Enter english score. ");
	scanf(" %d", &english);
	
	average = evaluate(math,physics,english);
	printf("\nAverage : %d", average);
	return 0;
}
