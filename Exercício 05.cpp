//Exercício 05
#include <stdio.h>
int main()
{
float med;
int n, soma, x, cont;

x=1;
soma=0;
cont=0;

while (x==1){
	printf("Informe um numero inteiro: \n");
	scanf("%int",&n);
	
	if (n!=0){
		if((n%2)!=0){
			cont=cont+1;
			soma=soma+n;
			
			med=(float)soma/cont;
			printf("A media dos numeros pares e: %f \n", med);		
			}else {
				x=0;}
			}
		}
		
		}
_________________________________________________________

Substituí "%int" por "%d" - Explicação: "%d" é a especificação padrão para leitura de números inteiros com sinal (int) no formato decimal.
O % indica que o scanf espera um valor a ser convertido.
O d significa "decimal" e se aplica a números inteiros. O que acontece ao usar "%int"?: O compilador não reconhece "%int" como um especificador válido.
Isso pode causar comportamentos inesperados, como erros de compilação ou funcionamento incorreto do programa.

__________________________________________________________

Ajustei a lógica para considerar apenas números pares ((n % 2) == 0).

__________________________________________________________

A média é exibida somente após o loop, evitando múltiplas impressões desnecessárias.

__________________________________________________________

Usei n == 0 para interromper o loop.

__________________________________________________________
	
#include <stdio.h>

int main() {
    float med;
    int n, soma, cont;

    soma = 0;
    cont = 0;

    while (1) { // Loop infinito controlado internamente
        printf("Informe um numero inteiro (digite 0 para sair): ");
        scanf("%d", &n);

        if (n == 0) {
            break; // Sai do loop se o número for 0
        }

        if ((n % 2) == 0) { // Verifica se o número é par
            cont++;
            soma += n;
        }
    }

    if (cont > 0) { // Calcula a média somente se houver números pares
        med = (float)soma / cont;
        printf("A media dos numeros pares e: %.2f\n", med);
    } else {
        printf("Nenhum numero par foi inserido.\n");
    }

    return 0;
}

