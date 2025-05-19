#include <stdio.h>
#include <string.h>

struct Produto{
	int nProd;
	float valor;
};

int main(){
	//cadastrando produtos
	struct Produto produto[5];
	
	produto[0].nProd = 1001;
	produto[0].valor = 1.50;

	produto[1].nProd = 1002;
	produto[1].valor = 2.50;

	produto[2].nProd = 1003;
	produto[2].valor = 3.50;

	produto[3].nProd = 1004;
	produto[3].valor = 4.50;

	produto[4].nProd = 1005;
	produto[4].valor = 5.50;

	//entrada

	int p, quantidade, i = 0, n = 0, eProd, pedidoValido, produtoEncontrado;
	float valorTotal = 0;
	
	// repeticao para quantidade de produtos
	
	do{
		scanf("%d", &p);
		if (p >= 1 && p <= 5){
			i++;
		}
	}while(i == 0);

	// repeticao para o pedido

	do{
		produtoEncontrado = 0;
		
		scanf("%d %d", &eProd, &quantidade);
		
		if (quantidade >= 1 && quantidade <= 500){
		//PROCURA O PRODUTO
			for (int x = 0; x < 5; x++){
				if (produto[x].nProd == eProd){	
					valorTotal = valorTotal + produto[x].valor * quantidade;
					produtoEncontrado = 1;
				}
			}
		}

		if (produtoEncontrado) {
				n++; // Só conta como pedido válido se o produto existir
			}
	}while ( n < p);	
	
	// MOSTRA O VALOR TOTAL
	
	printf("%.2f\n", valorTotal);


return 0;

}