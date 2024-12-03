//Exercício 04
#include <stdio.h>
#include <stdlib.h>
 int main()
{
	float n, Med, maior, menor, soma;
	int X, cont;
	
	X=0;
	maior=-1;
	menor=1000;
	soma=0;
	cont=0;
	
	while (X==0) {
		printf("Informe um numero real: \n");
		scanf("%f", &n);
		
		if (n>=0){ 
			if (((int)n%2)==0){
				cont=cont+1;
				soma=soma+n;
			} 
			if (n>maior){
				maior=n;
			}
			if (n<menor){
				menor=n;
			}else{
				X=1;
			}		
			
		}
	} 
	Med=(float)soma/cont;
	
	printf("A media e: %.2f \n", Med);
	printf("O maior numero e: %.2f \n", maior);
	printf("O menor numero e: %.2f \n", menor);
}
