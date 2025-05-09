#include <stdio.h>

int main(){
	int peca1, peca2, codpeca1, codpeca2;
	double valor1, valor2, valorTotal;
	
	scanf("%d %d %lf", &codpeca1, &peca1, &valor1);
	scanf("%d %d %lf", &codpeca2, &peca2, &valor2);

	valorTotal = (peca1 * valor1) + (peca2 * valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
	
	return 0;
}
	
	  