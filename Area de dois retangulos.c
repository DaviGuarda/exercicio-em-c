#include <stdio.h>

int main(){
	float area,area2,base,base2,altura,altura2;
	
	printf("Digite a base do primeiro Retangulo em cm: ");
	scanf("%f", &base);
	printf("Digite a altura do primeiro Retangulo em cm: ");
	scanf("%f", &altura);
	printf("Digite a base do segundo Retangulo em cm: ");
	scanf("%f", &base2);
	printf("Digite a altura do segundo Retangulo em cm: ");
	scanf("%f", &altura2);
	
	printf("\nA area do primeiro retangulo eh: %.2f cm\n",area = base*altura);
	printf("A area do segundo retangulo eh: %.2f cm\n",area2 = base2*altura2);
	
	if(area>area2){
		printf("\nA area do primeiro relangulo eh maior.\n");
	}
	if(area2>area){
		printf("\nA area do segundo relangulo eh maior.\n");
	}
	if(area == area2){
		printf("\nA area de ambos os retangulos sao iguais.\n");
	}
	return 0;
}
