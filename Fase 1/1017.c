#include <stdio.h>

int main(){

	int TEMPO, VELOCIDADE;
	double LITROS;
	
	scanf("%d %d", &TEMPO, &VELOCIDADE);
			
	LITROS = (TEMPO * VELOCIDADE)/12.0;

	printf("%.3lf\n", LITROS);

	return 0;

}