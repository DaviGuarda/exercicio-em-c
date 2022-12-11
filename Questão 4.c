#include<stdio.h>

int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	int teste = num-1;
	while(teste >=2){
		if(num%teste ==0){
			break;
		}else{
			teste--;
		}
	}
	if(teste == 1){
		printf("Eh primo!");
	}else{
		printf("Nao eh primo!");
	}
			
	
	return 0;
}
