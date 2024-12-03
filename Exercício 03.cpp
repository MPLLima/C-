//Exercício 02
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

	 

