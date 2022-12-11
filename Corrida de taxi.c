#include <stdio.h>

int main(){
	float band1=1.80,band2=2.30,op,km_percorrido,calculo;
	
	printf("Digite o numero da Bandeira (1 ou 2): ");
	scanf("%f", &op);
	printf("Digite o quilometro percorrido: ");
	scanf("%f", &km_percorrido);
	
	if(op == 1){
		printf("\nO valor final da corrida eh de: %.2f reais.\n", calculo = band1*km_percorrido);
	}
	if(op == 2){
		printf("\nO valor final da corrida eh de: %.2f reais.\n", calculo = band2*km_percorrido);
	}
	return 0;
}
