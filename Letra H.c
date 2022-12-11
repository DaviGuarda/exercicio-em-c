#include <stdio.h>

int main () {
	int A[5],B[5],C[5],D[15],i,j=0;
	
	for(i=0;i<5;i++){
	A[i]=i+1;
	B[i]=i+6;
	C[i]=i+11;
	}
	
	for(i=0;i<5;i++){
		D[j]=A[i];
		j++;
		D[j]=B[i];
		j++;
		D[j]=C[i];
		j++;
	}
	printf("A	B	C	D\n");	
	for(i=0;i<15;i++){
		if(i<5){
			printf("%d	%d	%d	%d\n",A[i],B[i],C[i],D[i]);
		}
		else{
				printf("			%d\n",D[i]);

		}
	}

	
	
	
	
	return 0;
}
