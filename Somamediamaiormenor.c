#include <stdio.h>

int main(){
	float nota,i,media,maior=0,menor=9999999,soma=0;
	
	for(i=1;i<=10;i++){
		printf("Digite a nota: ");
		scanf("%f", &nota);
		soma+=nota;
		if(maior<nota){
			maior=nota;
		}
		if(menor>nota){
			menor=nota;
		}
	}
	printf("\nA soma de todas as notas eh: %.2f\n", soma);
	printf("A media de todas as nota eh: %.2f\n", media = soma/10);
	printf("O maior numero eh: %.2f\n", maior);
	printf("O menor numero eh: %.2f\n", menor);

	return 0;
}
