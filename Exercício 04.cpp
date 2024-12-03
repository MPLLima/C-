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

________________________________________________________________

O programa nunca sai do loop while porque a variável X só é alterada dentro de um else que depende de n >= 0. Isso gera lógica incorreta.

________________________________________________________________

A inicialização de maior = -1 e menor = 1000 pode causar erros se os números inseridos não forem compatíveis com essas condições (exemplo: n < -1 ou n > 1000).

________________________________________________________________

Se nenhum número par for inserido, cont será 0, resultando em uma divisão por zero ao calcular a média (Med).

________________________________________________________________

A variável X não está sendo usada para controlar corretamente o fluxo do programa.

________________________________________________________________

#include <stdio.h>

int main() {
    float n, Med, maior, menor, soma;
    int cont;

    // Inicialização das variáveis
    maior = -__FLT_MAX__; // Menor valor possível de float
    menor = __FLT_MAX__;  // Maior valor possível de float
    soma = 0;
    cont = 0;

    while (1) { // Loop infinito controlado por condição interna
        printf("Informe um numero real (digite um negativo para sair): ");
        scanf("%f", &n);

        if (n < 0) { // Condição de parada
            break;
        }

        // Verifica se o número é par e acumula a soma
        if (((int)n % 2) == 0) {
            soma += n;
            cont++;
        }

        // Atualiza o maior número
        if (n > maior) {
            maior = n;
        }

        // Atualiza o menor número
        if (n < menor) {
            menor = n;
        }
    }

    // Calcula a média (evitando divisão por zero)
    if (cont > 0) {
        Med = soma / cont;
        printf("A media dos numeros pares e: %.2f\n", Med);
    } else {
        printf("Nao houve numeros pares para calcular a media.\n");
    }

    // Exibe o maior e o menor número
    if (maior != -__FLT_MAX__ && menor != __FLT_MAX__) {
        printf("O maior numero e: %.2f\n", maior);
        printf("O menor numero e: %.2f\n", menor);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    }

    return 0;
}

