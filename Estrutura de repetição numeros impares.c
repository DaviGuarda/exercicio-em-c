#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
	
	while(num<0){
		printf("ERRO! Digite um numero positivo, maior que 0: ");
		scanf("%d",&num);
	}
	printf("\nOs numeros impares menores que %d e maiores que 1 sao:\n",num);
	
	if(num%2==0){
		num--;
	}
	else{
		num=num-2;
	}
	while(num>=1){
		printf("%d ", num);
		num=num-2;
	}
	return 0;
}
