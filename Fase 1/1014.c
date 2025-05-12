#include <stdio.h>

int main(){
	double GASTO, KML = 0;
	int KM;
		
	scanf("%d %lf", &KM, &GASTO);
	
	KML =  KM / GASTO;
	printf("%.3lf km/l\n", KML);

	return 0;
}
