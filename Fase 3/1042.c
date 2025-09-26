#include<stdio.h>

int main(){
	int valor1, valor2, valor3;
	int ValorMaior, ValorMenor, ValorDoMeio;

	scanf("%d %d %d", &valor1, &valor2, &valor3);

	ValorMaior = valor1;

	if(valor2 >= ValorMaior){
		ValorDoMeio = valor1;
		ValorMaior = valor2;
	}else{
		ValorDoMeio = valor2;
	}

	if(valor3 >= ValorMaior){
		ValorMenor = ValorDoMeio;
		ValorDoMeio = ValorMaior;
		ValorMaior = valor3;

	}else if(valor3 >= ValorDoMeio){
		ValorMenor = ValorDoMeio;
		ValorDoMeio = valor3;	
	}else{
		ValorMenor = valor3;
	}

	printf("%d\n%\nd%d\n\n%d\n%d\n%d\n", ValorMenor, ValorDoMeio, ValorMaior, valor1, valor2, valor3);


	return 0;
}