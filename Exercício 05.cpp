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
	


