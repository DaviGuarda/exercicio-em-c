#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("\nO numero digitado %d eh par.\n", num);
	}else{
		printf("\nO numero digitado %d eh impar.\n", num);
	}
	
	
	return 0;
}
