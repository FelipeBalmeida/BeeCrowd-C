#include <stdio.h>
#include <stdlib.h>

int main(){

	int A, B, C, maiorAB;

	scanf("%d %d %d", &A, &B, &C);

	maiorAB = (A + B + abs(A - B))/2;
	
	if (maiorAB < C){

	printf("%d eh o maior\n", C);
	}else{
	printf("%d eh o maior\n", maiorAB);
	}

	return 0;
}
