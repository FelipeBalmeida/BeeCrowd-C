#include <stdio.h>
#include <string.h> 
	
struct Destination {
	char destino[50];
	int DDD;
};

int main(){
	
	//BRASILIA
	struct Destination destination[8];

	strcpy(destination[0].destino, "Brasilia");
	destination[0].DDD = 61;
	
	//SALVADOR

	strcpy(destination[1].destino, "Salvador");
	destination[1].DDD = 71;

	//SAO PAULO

	strcpy(destination[2].destino, "Sao Paulo");
	destination[2].DDD = 11;	
	
	//RIO DE JANEIRO

	strcpy(destination[3].destino, "Rio de Janeiro");
	destination[3].DDD = 21;

	//JUIZ DE FORA

	strcpy(destination[4].destino, "Juiz de Fora");
	destination[4].DDD = 32;

	//CAMPINAS

	strcpy(destination[5].destino, "Campinas");
	destination[5].DDD = 19;

	//VITORIA

	strcpy(destination[6].destino, "Vitoria");
	destination[6].DDD = 27;

	//BELO HORIZONTE

	strcpy(destination[7].destino, "Belo Horizonte");
	destination[7].DDD = 31;

	//FIM DOS DESTINOS

	int encontrado = 0, procurarDDD;

	scanf("%d", &procurarDDD);
	
	//PROCURAR DDD para imprimir
	
	for (int i = 0; i < 8; i++){
		if (procurarDDD == destination[i].DDD) {
			printf("%s\n", destination[i].destino);
			encontrado = 1;
			break;
		}
	}
	
	if (!encontrado) {
		printf("DDD nao cadastrado\n");
	}

	return 0;
}