#include <stdio.h>
#include <locale.h>

//VARIAVEIS GLOBAIS.

int matriz[5][5];
int i,j;
int opcao;
int valor;
int maior=0;
int menor=9999999;

//MENU PRINCIPAL.

void menu_principal(){
	setlocale(LC_ALL, "Portuguese");
	printf("\t\t\t\t\t======MENU PRINCIPAL======\n\n");
	printf("\t1 - Preencher Matriz\n");
	printf("\t2 - Exibir Matriz\n");
	printf("\t3 - Alterar Valores Menor que um Valor Informado\n");
	printf("\t4 - Alterar o �ltimo Valor Informado\n");
	printf("\t5 - Exibir o Maior e o Menor Valor da Matriz\n");
	printf("\t0 - Sair\n");
	printf("\nATEN��O: As op��es 2,3,4,5 s� podem ser acionadas ap�s o preenchimento da matriz.\n\n");
	printf("Digite uma op��o: ");
}

//1 - PREENCHER MATRIZ.

void preencher_matriz(){
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite o valor na posi��o [%d] [%d]: ",i,j);
			scanf("%d", &matriz[i][j]);
			if(maior<matriz[i][j]){ //Verifica qual maior e menor numero e armazena.
				maior=matriz[i][j];
			}
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
			}
		}
	}
}

//2 - EXIBIR MATRIZ.

void exibir_matriz(){
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%2d ",matriz[i][j]);
		}
	printf("\n");
	}
}

// 3 - Alterar Valores Menor que um Valor Informado.

void alterar_01(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor: ");
	scanf("%d",&valor);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matriz[i][j] < valor){
				printf("Digite o novo valor para posi��o [%d] [%d]: ",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
	}
}

//4 - Alterar o �ltimo Valor Informado.

void alterar_02(){
	setlocale(LC_ALL, "Portuguese");
	printf("O �ltimo valor informado foi: %d\n", matriz[4][4]);
	printf("Agora digite um novo n�mero para o �ltimo valor informado: ");
	scanf("%d", &matriz[4][4]);
	printf("\nVALOR MODIFICADO!");
}

//EXIBIC�O MAIOR E MENOR NUMERO DA MATRIZ.

void exibir_menor_maior(){
	setlocale(LC_ALL, "Portuguese");
	printf("O maior n�mero da matriz � %d, e o menor � %d",maior,menor);
}

//FUNCAO PRINCIPAL AONDE RECEBE TODOS OS VOID'S.

int main(){
	setlocale(LC_ALL, "Portuguese");
	do{
		menu_principal();
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				system("cls");
				printf("\t\t\t\t====�REA DE PREENCHIMENTO DE MATRIZ====\n\n");
				preencher_matriz();
				Sleep(4000);
				system("cls");
				break;
			case 2:
				system("cls");
				printf("\t\t\t\t\t====EXIBINDO MATRIZ====\n\n");
				exibir_matriz();
				Sleep(4000);
				break;
			case 3:
				system("cls");
				printf("\t\t\t====ALTERAR VALORES MENOR QUE O VALOR INFORMADO====\n\n");
				alterar_01();
				printf("\nVALORES ALTERADOS!");
				Sleep(4000);
				break;
			case 4:
				system("cls");
				printf("\t\t\t====ALTERAR �LTIMO VALOR INFORMADO DA MATRIZ====\n\n");
				alterar_02();
				Sleep(4000);
				system("cls");
				break;
			case 5:
				system("cls");
				printf("\t\t\t\t\t====EXIBINDO MAIOR E MENOR====\n\n");
				exibir_menor_maior();
				Sleep(4000);
				system("cls");
				break;
			case 0:
				system("cls");
				printf("Saindo...");
				Sleep(2000);
				break;
			default:
				printf("OP��O INVALIDA!");
				Sleep(4000);
				system("cls");
		}
	}while(opcao!=0);
	
	
	return 0;
}
