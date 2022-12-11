#include <stdio.h>

int main(){
	int vlr;
	while(1){
	printf("Digite um numero entre 0 e 10:");
	scanf("%d", &vlr);
	if(vlr>10){
	printf("Esse numero %d nao esta entre 0 e 10, digite outro!\n",vlr);
	}
	if(vlr>=0 &&vlr<=10){
		printf("Esta entre 0 e 10!\n");
		if(vlr%2==0){
			printf("%d eh par!\n", vlr);
		}else{
			printf("%d Nao eh par!\n", vlr);
		}
	}
	if(vlr<0){
		break;
	}
	}
	return 0;
}
