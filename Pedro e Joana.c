#include <stdio.h>

int main(){
	int Pedro,Joana;
	printf("A idade nao pode ser igual!\n\n");
	printf("Ditite a idade de Pedro: ");
	scanf("%d", &Pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &Joana);
	
	if(Pedro>Joana){
		printf("\n\nPedro eh mais velho que Joana.");
	}
	if(Joana>Pedro){
		printf("\nJoana eh mais velho que Pedro.");

	}
	
	
	return 0;
}
