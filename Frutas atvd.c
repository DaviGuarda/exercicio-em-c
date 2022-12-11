#include <stdio.h>

int main() {
	char opcao;
	float morango= 26.5,maca=5.85,kg,kgmrg,kgmc,desconto,desconto2, total,total2,total3, final;
// kg morango 26.5, maça 5.85
	printf("Para morango digite A, para maca digite B, para os dois produtos digite C: ");
	scanf("%c",&opcao);
	if(opcao == 'C') {
		printf("Quantos kg de morango deseja e kg de maca: ");
		scanf("%f%f",&kgmrg, &kgmc);
		if(kgmrg>3) {
			total = morango*kgmrg;
			desconto = total*0.97;
			printf("O valor a pagar do morango com desconto eh: %.2f\n", desconto);
			if(kgmc>5) {
				total2 = maca*kgmc;
				desconto2 = total2*0.96;
				printf("O valor a pagar da maca com desconto eh: %.2f\n", desconto2);
				total3=desconto+desconto2;
			}
		}else{
			total = morango*kgmrg;
			total2 = maca*kgmc;
			total3 = total + total2;
			printf("O total a pagar eh: %.2f", total3);
		}
	} else if(opcao =='A') {
		printf("Quantos kg de morango deseja: ");
		scanf("%f", &kgmrg);
		if(kgmrg>3) {
			total = morango*kgmrg;
			desconto = total*0.97;
			printf("O valor a pagar do morango com desconto de 3 por cento eh: %.2f\n", desconto);
			total3=desconto+desconto2;
			kgmc=0;
		} else {
			total = morango*kgmrg;
			printf("Valor a pagar sem desconto eh: %.2f", total);
		}
	}
	if(opcao =='B') {
		printf("Quantos kg de maca deseja: ");
		scanf("%f", &kgmc);
		if(kgmc>5) {
			total2 = maca*kgmc;
			desconto2 = total2*0.96;
			printf("O valor a pagar da maca com desconto de 4 por cento eh: %.2f\n", desconto2);
			total3=desconto+desconto2;
			kgmrg=0;
		} else {
			total2 = maca*kgmc;
			printf("Valor a pagar sem desconto eh: %.2f", total2);
		}
	}
	if((kgmrg+kgmc)>10) {
		final = total3 *0.9;
		printf("O valor a total a pagar com desconto de 10 por cento, mais o desconto passado eh: %.2f", final);
	}
	return 0;
}
