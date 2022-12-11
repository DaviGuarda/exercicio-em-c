#include <stdio.h>

int main(){
	int num,resp_bool=0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0 && num>15){
		printf("\nO numero %d eh par, e maior que 15.\n" ,num);
		resp_bool=1;
	}
	if(num%2 == 1 && num<50){
		printf("\nO numero %d eh impar, e menor que 50.\n" ,num);
		resp_bool=1;
	}
	if(resp_bool == 0){
		printf("\nO numero digitado nao entra em nenhuma condicao do programa!\n");
	}
	return 0;
}
