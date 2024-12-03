//Exercício 01
#include <stdio.h>
int main()
{
	int X, Y, i, soma, qtde;
	float med;
	
	printf("Informe um valor inteiro positivo para X: \n");
	scanf("%i", &X);
	
	printf("Informe um valor positivo para Y: \n");
	scanf("%i", &Y);
	

	if (X>0&Y>0&X<Y){
	med=0;
	soma=0;
	qtde=0;
	
	
	for (i=X; i<=Y; i++){
	soma=soma+i;
	qtde=qtde+1;
	}
	med=(float)soma/qtde;
	
	printf("A media e: %f\n", med);	
	printf("A qtde de numero na sequencia: %d\n", qtde); 
	
    }else 

		printf("Nao atende os requisitos. \n");
	
	 } 

