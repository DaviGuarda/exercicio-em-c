#include <stdio.h>

int main (){
	int cont,contaux=1;
	
	while(contaux<=20){
		cont=0;
		while(cont<=10){
			printf("\t%d x %d = %d \n",contaux,cont,contaux*cont);
			cont++;
		}
		printf("\n\n");
		contaux++;
	}
	
	
	return 0;
}
