#include <stdio.h>

int main(){
	int qnt,cont;
	float nota,menor=10,maior=0,soma=0;
	
	printf("Digite a quantidade de notas a ser calculadas: ");
	scanf("%d", &qnt);
	
	while(qnt<0){
		printf("ERRO! Digite um numero acima de 0: ");
		scanf("%d" ,&qnt);
	}
	cont=1;
	while(cont<=qnt){
		printf("Digite a %d.a nota: ", (cont));
		scanf("%f", &nota);
		while((nota<0 || nota>10)){
			printf("ERRO! Digite a %d.a nota novamente: ", (cont));
			scanf("%f", &nota);
		}
		soma=soma+nota;
		if(nota>maior)
		maior=nota;
		if(nota<menor)
		menor=nota;
		cont++;
	}
	printf("\nA soma das notas eh: %.1f\n", soma);
	printf("A media das notas eh: %.1f\n", (soma/qnt));
	printf("O maior nota eh: %.1f\n", maior);
	printf("A menor nota eh: %.1f\n", menor);

	return 0;
}
