#include<stdio.h>

int main(){
	int num,i,maior=0;
	for(i=1;i<11;i++){
		printf("Digite um valor: ");
		scanf("%d", &num);
		if(maior<num){
			maior = num;
		}
	}
	printf("O maior numero eh: %d", maior);

	
	return 0;
}
