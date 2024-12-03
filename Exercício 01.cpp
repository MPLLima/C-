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


_______________________________________________________________________

Em if (X>0&Y>0&X<Y), o operador lógico correto é && (AND lógico). O operador & realiza uma operação bitwise, que não é apropriada para este caso.
if (X > 0 && Y > 0 && X < Y)

_________________________________________________________________________

A parte else não está devidamente estruturada. No caso de entrada inválida, o programa exibe a mensagem "Nao atende os requisitos", mas não finaliza corretamente.
Deve-se adicionar um bloco para o else:

else {
    printf("Nao atende os requisitos.\n");
}

_________________________________________________________________________

A função main deveria terminar com return 0;, indicando que o programa foi executado com sucesso.

______________________________________________________________________________________________________


#include <stdio.h>

int main() {
    int X, Y, i, soma, qtde;
    float med;

    printf("Informe um valor inteiro positivo para X: ");
    scanf("%d", &X);

    printf("Informe um valor positivo para Y: ");
    scanf("%d", &Y);

    if (X > 0 && Y > 0 && X < Y) {
        soma = 0;
        qtde = 0;

        for (i = X; i <= Y; i++) {
            soma += i;
            qtde++;
        }
        
        med = (float)soma / qtde;

        printf("A media e: %.2f\n", med);
        printf("A quantidade de numeros na sequencia: %d\n", qtde);
    } else {
        printf("Os valores nao atendem aos requisitos.\n");
    }

    return 0;
}
