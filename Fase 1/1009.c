#include <stdio.h>

int main(){
	char nome[100];
	double SalarioFixo, SalarioFinal, Vendas;
	
	scanf("%s %lf %lf", nome, &SalarioFixo, &Vendas);
	
	SalarioFinal = SalarioFixo + ( Vendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", SalarioFinal);

	return 0;
}