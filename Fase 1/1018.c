#include <stdio.h>

int main(){
	
	int NOTA = 0, NOTAFINAL, N100 = 0, N50 = 0, N20 = 0, N10 = 0, N5 = 0, N2 = 0, N1 = 0;
	
	while (NOTA <= 0 || NOTA >= 1000000){
		scanf("%d", &NOTA);
	}
	
	NOTAFINAL = NOTA;
	
	do {
		if (NOTA >= 100){
			NOTA -= 100;
			N100++;
		} else if ( NOTA >= 50){
			NOTA -= 50;
			N50++;
		} else if ( NOTA >= 20){
			NOTA -= 20;
			N20++;
		} else if ( NOTA >= 10){
			NOTA -= 10;
			N10++;
		} else if ( NOTA >= 5){
			NOTA -= 5;
			N5++;
		} else if ( NOTA >= 2){
			NOTA -= 2;
			N2++;
		} else if ( NOTA >= 1){
			NOTA -= 1;
			N1++;
		}	
	} while	(NOTA > 0);
	
	printf("%d\n", NOTAFINAL);
	printf("%d nota(s) de R$ 100,00\n", N100);
	printf("%d nota(s) de R$ 50,00\n", N50);
	printf("%d nota(s) de R$ 20,00\n", N20);
	printf("%d nota(s) de R$ 10,00\n", N10);
	printf("%d nota(s) de R$ 5,00\n", N5);
	printf("%d nota(s) de R$ 2,00\n", N2);
	printf("%d nota(s) de R$ 1,00\n", N1);


	return 0;
}