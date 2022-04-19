#include<stdio.h>
#include<locale.h>

 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int contador;
 	
 	contador = 1;
 	
 	while (contador <51){
 		
 		printf("%d \n", contador);
 		contador = contador +1;
 	}
 	system("pause");
 }
 

