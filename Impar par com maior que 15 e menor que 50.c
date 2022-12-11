#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("\nEsse numero %d eh par.\n", num);
		if(num>15){
			printf("\nEsse numero tambem eh maior que 15.\n");
		}
	}else{
		printf("\nEsse numero %d eh impar.\n" ,num);
		if(num<50){
			printf("\nEsse numero tambem eh menor que 50.\n");
		}
	}
	
	
	return 0;
}
