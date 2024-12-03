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

