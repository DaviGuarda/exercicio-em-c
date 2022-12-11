#include <stdio.h>

int main(){
	int alunos,alunas,total;
	
	printf("Digite a quantidade de Alunos: ");
	scanf("%d", &alunos);
	printf("Digite a quantidade de Alunas: ");
	scanf("%d", &alunas);
	
	if(alunos>alunas){
		printf("\nExistem mais alunos do que alunas.\n");
	}
	if(alunas>alunos){
		printf("\nEistem mais alunas do que alunas. O total de alunos eh de: %d\n", total = alunas + alunos);
	}
	if(alunos == alunas){
		printf("\nA quantidade de alunos, eh igual a de alunas.\n");;
	}
	return 0;
}
