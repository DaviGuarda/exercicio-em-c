#include <stdio.h>
#include <string.h>

int main (){
	int i;
	char palavra[30];
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	for(i = 0;i<4;i++){
		printf("%c\n",palavra[i]);
	}
	
	
	
	return 0;
}
