#include <stdio.h>
#include <locale.h>

int id_salario[5][2];
int i,j,cont=0;
int op;
int busca;

void menu (){
	setlocale(LC_ALL, "Portuguese");
	printf("\t1 - Adicionar funcionarios\n");
	printf("\t2 - Substituir o salário do funcionário\n");
	printf("\t3 - Mostrar lista de funcionários\n");
	printf("\t0 - Sair\n");
	printf("\nDigite uma opção: ");

}

void adicionar_funcionarios (){
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			if(j == 0) {
				printf("Digite o id do funcionário: ");
				scanf("%d",&id_salario[i][j]);
				printf("[I]%d\n", i);
			} else if(j == 1){
				printf("Digite o salário do funcionário: ");
				scanf("%d",&id_salario[i][j]);
				printf("[J]%d\n", j);
				cont++;
				printf("%d\n",cont);
			}
		}
	}
	
}

void substituir_salario(){
	printf("Digite a id do funcionario que deseja substituir o salário: ");
	scanf("%d", &busca);
	
	for (i = 0; i < 5; i++) {
		if(busca == id_salario[i][0]) {
			printf("Digite o novo salário do funcionario: ");		
			scanf("%d", &id_salario[i][1]);
		}
	}
}

void mostrar (){
printf("ID		SALÁRIO\n");
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d		  ",id_salario[i][j]);
		}
		printf("\n");
	}
}

void main (){
		do{
		printf("\t\t\t======ATIVIDADE MENU======\n\n");
		menu();
		scanf("%d",&op);
				switch(op){
					case 1:
					system("cls");
					printf("\t\t\t\t=============ADICIONAR FUNCIONÁRIOS=============\n\n");
					Sleep(4000);
					adicionar_funcionarios();
					system("cls");
					break;
					case 2:
					system("cls");
					printf("\t\t\t\t=============SUBSTITUIR O SALÁRIO DO FUNCIONÁRIO=============\n\n");
					Sleep(4000);
					substituir_salario();
					system("cls");
					break;
					case 3:
					system("cls");
					printf("\t\t\t\t=============MOSTRAR FUNCIONÁRIOS=============\n\n");
					Sleep(4000);
					mostrar();
					Sleep(4000);
					system("cls");
					break;
				}	
		}while(op!= 0);
			}


