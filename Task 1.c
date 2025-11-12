#include <stdio.h>
//TASK 1
 int transaction(int limit, int amount){
	
	if (amount > limit){	
		printf("DECLINED.\n\n");
	} else{
		limit=limit - amount;
		printf("APPROVED.\n\n");	
	}
	return limit;
}

int main(){
	
	int Amount, limit = 5000, Continue = 1;
	
	while(Continue == 1){
	
	printf("Enter transaction amount: ");
	scanf(" %d", &Amount);

	limit = transaction(limit, Amount);
	
	printf("Would you like another transaction. (1) Yes. (0) No.\n");
	scanf(" %d", &Continue);
}
	return 0;
}
