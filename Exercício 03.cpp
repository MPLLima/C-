//Exercício 03
#include <stdio.h>
 int main()
 {
	float i;
 	
	printf("Informe o valor da corrente: \n");
	scanf("%f", &i);
 	
    if(i<=15.5){
	printf("O condutor e de 1,5mm2. \n");
	}
		else 
	if (i<=21){
	printf("O condutor e de 2,5 mm2. \n");
	}
	else
		if (i<=28){
		printf("O condutor e de 4 mm2. \n");
	}
	else
	if (i<=36){
	printf("O condutor e de 6 mm2. \n");
 }
 }

	 
________________________________________________________

Substituí else seguido de if por else if para melhorar a legibilidade e desempenho.
Assim, quando uma condição é verdadeira, as demais não são avaliadas.

_________________________________________________________

Inclui uma mensagem padrão para correntes que não se encaixam nos intervalos especificados.

____________________________________________________________

Adiciona return 0; no final para indicar que o programa terminou com sucesso.



	#include <stdio.h>

int main() {
    float i;

    // Solicita o valor da corrente ao usuário
    printf("Informe o valor da corrente: ");
    scanf("%f", &i);

    // Avalia o tamanho do condutor com base no valor da corrente
    if (i <= 15.5) {
        printf("O condutor é de 1,5 mm².\n");
    } else if (i <= 21) {
        printf("O condutor é de 2,5 mm².\n");
    } else if (i <= 28) {
        printf("O condutor é de 4 mm².\n");
    } else if (i <= 36) {
        printf("O condutor é de 6 mm².\n");
    } else {
        printf("Corrente fora do intervalo especificado.\n");
    }

    return 0;
}
