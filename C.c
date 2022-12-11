#include<stdio.h>
#include<locale.h>

int ini=0;
int fim=0;
int vetor[10];

void menu () {
	setlocale(LC_ALL, "Portuguese");
	printf("\t1 - Emfileira\n\t2 - Consome\n\t3 - Exibir\n\t4 - Ordenar\n\t5 - Busca\n\t0 - Sair\n\nDigite uma opção:");
}

void emfileira(int valor) {
	if(fim<9) {
		vetor[fim]=valor;
		fim++;
	} else {
		printf("Fila Cheia\n");
	}
}

int consome () {
	if(ini!=fim) {
		ini++;
		return vetor[ini-1];
	} else {
		return -9999999;
	}
}

void exibir() {
	int i;
	if(ini == fim) {
		printf("Fila Vazia!\n");
	} else {
		for(i=ini; i<fim; i++) {
			printf("Vetor[%d] = %d\n",i,vetor[i]);
		}
	}
}

void ordenar() {
	int aux = 0;
	int j=0;
	int i=0;

	for(j=ini; j<fim; j++) {
		int imenor=j;
		for(i=j; i<fim; i++) {
			if(vetor[i]<vetor[imenor]) {
				imenor=i;
			}
		}
		aux=vetor[j];
		vetor[j]=vetor[imenor];
		vetor[imenor]=aux;
	}
}

int BuscaBinaria(int chave,int inicio,int final) {
	int meio = (inicio+final)/2;
	if(inicio<=final) {
		meio = (inicio+final)/2;
		if(chave == vetor[meio]) {
			return meio;
		} else if(chave<vetor[meio]) {
			return BuscaBinaria(chave,inicio,meio-1);
		} else {
			return BuscaBinaria(chave,meio+1,final);
		}
	}
	return -1;
}

int main () {
	int op;

	do {
		menu();
		scanf("%d",&op);
		switch(op) {
			case 1: {
				int valor;
				printf("Digite o valor: ");
				scanf("%d",&valor);
				emfileira(valor);
				break;
			}
			case 2:
				consome();
				break;
			case 3:
				exibir();
				break;
			case 4:
				ordenar();
				break;
			case 5: {
				int busca;
				printf("Digite o número a ser buscado: ");
				scanf("%d",&busca);
				printf("O número buscado está na posição: %d\n",BuscaBinaria(busca,ini,fim));
				break;
			case 0:
				system("cls");
				printf("Saindo.../n");
			}
			default:
				printf("INVALIDO!\n");
		}
	} while(op != 0);




	return 0;
}
