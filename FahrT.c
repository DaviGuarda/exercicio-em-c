#include <stdio.h>

int main(){
	float Tc;
	
	for(Tc=50;Tc<=65;Tc++){
		printf("%.0f C = %.1f F\n",Tc,(((Tc*9.0)/5.0)+32.0));
	}
	
	return 0;
}
