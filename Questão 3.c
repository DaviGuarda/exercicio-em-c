#include <stdio.h>

int main(){
	float nota,nota2,media_final;
	
	printf("Digite a primeira nota parcial: ");
	scanf("%f", &nota);
	printf("Digite a segunda nota parcial: ");
	scanf("%f", &nota2);
	
	media_final = (nota+nota2)/2;
	printf("Sua media final eh %.2f\n", media_final);
	
	if(media_final>=7){
		printf("Aprovado!");
	}else if(media_final<7 && media_final>4){
		printf("Recuperacao!");
	}else{
		printf("Reprovado!");
	}
	
	
	return 0;
}
