#include <stdio.h>
#include <time.h>

int main (){
	int A[6],B[6],C[12],i=0,j=0;
	srand(time(NULL));
	while(i<6){
		//printf("Digite o valor para o Vetor A na posicao %d: ",i);
		//scanf("%d", &A[i]);
		A[i]=rand() %30;
		if(A[i] % 2 == 0){
			printf("Posicao %d = %d.\n",i,A[i]);
			i++;
		}
	}
	i=0;
	printf("\n");
	while(i<6){
		//printf("Digite o valor para o Vetor B na posicao %d: ",i);
		//scanf("%d", &B[i]);
		B[i]=rand() %50;
		if(B[i] % 2 != 0){
			printf("Posicao %d = %d.\n",i,B[i]);
			i++;
		}	
	}
	printf("\n");
	for(i=0;i<6;i++){
		C[j]=A[i];
		j++;
	}
	for(i=0;i<6;i++){
		C[j]=B[i];
		j++;
	}
	for(i=0;i<12;i++){
		printf("%d\n",C[i]);
	}



	return 0;
}
