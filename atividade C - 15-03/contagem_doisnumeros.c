#include<stdio.h>
#include<locale.h>

 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int contador, inicio, final;
 	
 	printf("Entre com o valor inicial:");
 	scanf("%d", &inicio);
 	printf("Entre com o valor final:");
 	scanf("%d", &final);
 	
 	while (inicio <= final){
 		printf("%d \n", inicio);
 		inicio = inicio +1;
 }
 
 	system("pause");
 }
 

