#include <stdio.h>

int main(){
	double N1, N2, N3, N4, NE, MEDIA1, MEDIAF;
	
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	
	MEDIA1 = (N1 * 0.2) + (N2 * 0.3) + (N3 * 0.4) + (N4 * 0.1);
	
	if (MEDIA1 >= 7){
	printf("Media: %.1lf\nAluno aprovado.\n", MEDIA1);
	
	}else if (MEDIA1 < 5){
	printf("Media: %.1lf\nAluno reprovado.\n", MEDIA1);
	
	}else{
		printf("Media: %.1lf\nAluno em exame.\n", MEDIA1);
		scanf("%lf", &NE);
		MEDIAF = (MEDIA1 + NE)/2;

		printf("Nota do exame: %.1lf\n", NE);
		
		if (MEDIAF >= 5){
		printf("Aluno aprovado.\n");
		}else{
		printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1lf\n", MEDIAF);
	}
	return 0;

}