#include <stdio.h>

int main(){
	int num,soma=0;
	
	do{
		printf("Digite um numero positivo: ");
		scanf("%d", &num);
		if(num>=0){
		printf("A soma eh %d.\n",soma += num);
		}
	}while(num>=0);
	

	return 0;
}
