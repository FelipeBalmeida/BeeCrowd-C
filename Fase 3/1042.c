#include <stdio.h>

int main(){

	int val1, val2, val3;

	scanf ("%d %d %d", &val1, &val2, &val3);
	
	//verifica e imprime qual num é menor
	
	if ( val1 < val2 && val1 < val3){
		printf("%d\n", val1);
	
	}else if ( val2 < val1 && val2 < val3){
		printf("%d\n", val2);
	
	}else if ( val3 < val1 && val3 < val2){
		printf("%d\n", val3);
	
	}	
	//se for ==



	//verifica e imprime o num do meio

	if ( val1 < val2 && val1 > val3 || val1 > val2 && val1 < val3){
		printf("%d\n", val1);
	
	}else if ( val2 < val1 && val2 > val3 || val2 > val1 && val2 < val3){
		printf("%d\n", val2);
	
	}else if ( val3 < val1 && val3 > val2 || val3 > val1 && val3 < val2){
		printf("%d\n", val3);
	
	}
	//verifica e imprime o maior
	
	if ( val1 > val2 && val1 > val3){
		printf("%d\n", val1);
	
	}else if ( val2 > val1 && val2 > val3){
		printf("%d\n", val2);
	
	}else if ( val3 > val1 && val3 > val2){
		printf("%d\n", val3);
	
	}

	return 0;

}