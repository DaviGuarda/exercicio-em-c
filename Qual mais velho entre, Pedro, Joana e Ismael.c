#include <stdio.h>

int main(){
	int Pedro,Joana,Ismael;
	printf("ATENCAO: Os tres possuem idades diferentes!\n\n");
	
	printf("Digite a idade de Pedro:");
	scanf("%d", &Pedro);
	printf("Digite a idade de Joana:");
	scanf("%d", &Joana);
	printf("Digite a idade de Ismael:");
	scanf("%d", &Ismael);
	
	if(Pedro>Joana && Pedro>Ismael){
		printf("\nPedro eh o mais velho com %d anos.\n", Pedro);
	}else if(Joana>Pedro && Joana>Ismael){
		printf("\nJoana eh a mais velha com %d anos.\n", Joana);
	}else{
		printf("\nIsmael eh o mais velho com %d anos.\n", Ismael);
	}
	
	return 0;
}
