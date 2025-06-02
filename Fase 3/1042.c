#include <stdio.h>

int main(){

	int val1, val2, val3 ,valMenor, valMedio, valMaior;

	scanf ("%d %d %d", &val1, &val2, &val3);
	
	//verifica e imprime qual num é menor
	
	if ( val1 <= val2 && val1 <= val3){
		valMenor = val1;
	
	}else if ( val2 <= val1 && val2 <= val3){
		valMenor =  val2;
	
	}else if ( val3 <= val1 && val3 <= val2){
		valMenor =  val3;
	
	}	

	//verifica e imprime o num do meio

	if ( val1 <= val2 && val1 >= val3 || val1 >= val2 && val1 <= val3){
		valMedio = val1;
	
	}else if ( val2 <= val1 && val2 >= val3 || val2 >= val1 && val2 <= val3){
		valMedio =  val2;
	
	}else if ( val3 <= val1 && val3 >= val2 || val3 >= val1 && val3 <= val2){
		valMedio =  val3;
	
	}
	//verifica e imprime o maior
	
	if ( val1 >= val2 && val1 >= val3){
		valMaior=  val1;
	
	}else if ( val2 >= val1 && val2 >= val3){
		valMaior =  val2;
	
	}else if ( val3 >= val1 && val3 >= val2){
		valMaior =  val3;
	
	}
	 
	//verficar os iguais
	if ( val1 == val2 && val1 > val3){
		printf("%d\n%d\n%d\n", val3, val1, val2);
	
	} else if ( val1 == val2 && val1 < val3){
		printf("%d\n%d\n%d\n", val1, val2, val3); // VAL1 IGUAL VAL2
	
	} else if ( val1 == val3 && val1 > val2){
		printf("%d\n%d\n%d\n", val2, val1, val3); 

	} else if ( val1 == val3 && val1 < val2){
		printf("%d\n%d\n%d\n", val1, val3, val2); // VAL1 IGUAL VAL3
	
	} else if ( val2 == val3 && val2 > val1){
		printf("%d\n%d\n%d\n", val1, val2, val3); 

	} else if ( val2 == val3 && val2 < val1){
		printf("%d\n%d\n%d\n", val3, val2, val1); //VAL2 IGUAL VAL3

	} else if ( val2 == val3 && val2 == val1){
		printf("%d\n%d\n%d\n", val3, val2, val1); //VAL td IGUAL 

	} else {
		printf("%d\n%d\n%d\n", valMenor, valMedio, valMaior); 
	
	}
	return 0;

}