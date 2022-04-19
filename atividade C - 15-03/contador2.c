#include<stdio.h>
#include<locale.h>

 main(){
	setlocale(LC_ALL, "Portuguese");
	int contador;
	
	contador = 4;
	while(contador < -1){
		printf("%d \n", contador);
		contador = contador - 1;
	}
	
	system ("pause");
	
}
