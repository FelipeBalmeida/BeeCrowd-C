#include <stdio.h>

int main(){

	int tempo, minutos = 0, horas = 0, segundos = 0;
	
	scanf("%d", &tempo);
	
	do{
		if (tempo >= 3600){
			tempo -= 3600;
			horas++;	
		}else if (tempo >= 60){
			tempo -= 60;
			minutos++;	
		}else if (tempo >= 1){
			tempo -= 1;
			segundos++;	
		}
	}while(tempo > 0);

	printf("%d:%d:%d\n", horas, minutos, segundos);

	return 0;
}