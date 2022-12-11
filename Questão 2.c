#include <stdio.h>

int main(){
	int ano=2022;
	if(ano%4==0){
		printf("O ano %d, e ele eh um ano bissexto.", ano);
	}
	else
	{
		printf("O ano %d, e ele nao eh um ano bissexto.", ano);
	}
	return 0;
}
