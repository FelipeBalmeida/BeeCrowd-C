#include <stdio.h>

int main(){

	int HTrab, NFunc;
	float HRec, Salario;
	
	scanf("%d %d %f", &NFunc, &HTrab, &HRec);
	Salario = HTrab * HRec;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", NFunc, Salario);

	return 0;
}
	