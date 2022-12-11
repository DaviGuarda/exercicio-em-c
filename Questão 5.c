#include <stdio.h>

int main(){
	int num_armazen=17,num,i;
	printf("\n\t\t\t\tJogo da adivinhacao, tente adivinhar um numero ente 0 - 100!\n\n");
	printf("===================================================================");
	printf("\t\n\nApenas 10 tentativas para acertar o numero sorteado.\n\n");
	printf("===================================================================\n");

	
	for(i=10;i>0;i--){
		printf("\tResta %d tentativas\n\n", i);
		printf("Tente adivinhar o numero sorteado: ");
		scanf("%d", &num);
		if(num == 17){
		printf("Parabens voce acertou o numero sorteado, que era %d.\n", num_armazen);
		break;
		}
		if(num>num_armazen){
			printf("O numero digitado eh maior que o numero sorteado!\n\n");
		}else{
			printf("O numero digitado eh menor que o numero sorteado!\n\n");
		}
	}
	
	return 0;
}
