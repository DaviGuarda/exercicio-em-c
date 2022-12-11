#include <stdio.h>

int main(){
	int A[6],B[6],C[12],i=0,j=0;
	
	while(i<6){
		printf("Digite o valor para o Vetor A %d: ", i+1);
		scanf("%d", &A[i]);
		if(A[i] %2 ==0){
			//C[j]=A[i];
			//j++;
			i++;
		}else{
			printf("BURRO!Digite um numero PAR %d: ", i+1);
			scanf("%d", &A[i]);
			//C[j]=A[i];
			//j++;
			i++;
		}
	}
	i=0;
	while(i<6){
		
		printf("Digite o valor para o Vetor B %d: ",i+1);
		scanf("%d", &B[i]);
		if(B[i] %2 != 0){
			//C[j]=B[i];
			//j++;
			i++;
		}else{
			printf("BURRO!Digite um numero IMPAR %d: ", i+1);
			scanf("%d", &B[i]);
			//C[j]=B[i];
			//j++;
			i++;
		}
	}
	for(i=0;i<6;i++){
		C[j]=A[i];
		j++;
		C[j]=B[i];
		j++;
	}
	/*for(i=0;i<6;i++)
	printf("%d\n",B[i]);
	for(i=0;i<6;i++)
	printf("%d\n",A[i]);*/
	
	printf("A	B	C\n");
	
	for(i=0;i<12;i++){
		if(i<6){
			printf("%d	%d	%d\n",A[i],B[i],C[i]);
		}else{
			printf("  	  	%d\n",C[i]);
		}
	}
	return 0;
}
