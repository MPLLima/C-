//Exercício 02
#include <stdio.h>
#include <cmath>
int main()
{
int op;
float P, a, b;

printf("Digite 01 se possui V e I. \n");
printf("Digite 02 se possui V e R. \n");
printf("Digite 03 se possui I e R. \n");
scanf("%int", &op);

if (op==01){
	printf("Digite o valor de V: \n");
	scanf("%f", &a);
	
	printf("Digite o valor de I: \n");
	scanf("%f", &b);
	
	P=(float) a*b;
	
	printf("A potencia eletrica e: %f \n", P);
}
else 
	if(op==2){
	printf("Digite o valor de V: \n");
	scanf("%f", &a);
	
	printf("Digite o valor de R: \n");
	scanf("%f", &b);
	
	P=(float)pow(a,2)/b;

printf("A corrente eletrica e: %f \n", P);
}
else
	if(op==3){
	printf("Digite o valor de I: \n");
	scanf("%f", &a);
	
	printf("Digite o valor de R: \n");
	scanf("%f", &b);
	
	P=(float)pow(a,2)*b;
	
	printf("A resistencia eletrica e: %f \n", P);
}
else{
	printf("A opcao nao e valida \n");
	}
}


_____________________________________________________

Inclui return 0; para indicar que o programa terminou corretamente.

_____________________________________________________

(float)soma / qtde converte soma para float antes da divisão para evitar perda de precisão.

_____________________________________________________

O operador lógico && foi usado para combinar condições.

_____________________________________________________


#include <stdio.h>

int main() {
    int X, Y, i, soma, qtde;
    float med;

    // Solicita ao usuário os valores de X e Y
    printf("Informe um valor inteiro positivo para X: ");
    scanf("%d", &X);

    printf("Informe um valor positivo para Y: ");
    scanf("%d", &Y);

    // Valida se os valores são positivos e X < Y
    if (X > 0 && Y > 0 && X < Y) {
        soma = 0;    // Inicializa a soma
        qtde = 0;    // Inicializa o contador de números

        // Loop para somar os números do intervalo e contar a quantidade
        for (i = X; i <= Y; i++) {
            soma += i;
            qtde++;
        }

        // Calcula a média
        med = (float)soma / qtde;

        // Exibe os resultados
        printf("A media e: %.2f\n", med);
        printf("A quantidade de numeros na sequencia: %d\n", qtde);
    } else {
        // Caso os valores não atendam aos critérios
        printf("Os valores nao atendem aos requisitos.\n");
    }

    return 0;
}
	
