#include <stdio.h>

int main(){

	int dia1, dia2, dia3;
	scanf("%d %d %d", &dia1, &dia2, &dia3);
	int feliz = 0;
	
	if((dia1 > dia2) && (dia2 <= dia3)){
		feliz = 1;
	}else if((dia1 < dia2) && (dia2 >= dia3)){
		feliz = 0;
	}else if(((dia1 < dia2) && (dia2 < dia3)) && (dia3-dia2 < dia2-dia1)){
		feliz = 0;
	}else if(((dia1 < dia2) && (dia2 < dia3)) && (dia3 - dia2 >= dia2-dia3)){
		feliz = 1;
	}else if(((dia1 > dia2) && (dia2 > dia3)) && (dia2-dia3 < dia1-dia2) ){
		feliz = 1;
	}else if(((dia1 > dia2) && (dia2 > dia3)) && (dia2-dia3 >= dia1-dia2)){
		feliz = 0;
	}else if((dia1 == dia2) && (dia2 < dia3)){
		feliz = 1;
	}else{
		feliz = 0;
	}

	printf("%s\n", feliz ? ":)" : ":(");
	
	return 0;
}