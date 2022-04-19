#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

 main(void){
	setlocale(LC_ALL, "Portuguese");
	int contador, num, multi;
	
	printf("Digite um valor para tabuada:");
	scanf("%d", &num);
	contador = 1;
	while(contador <11){
		multi= contador * num;
		printf("%d * %d= %d \n", contador, num, multi);
	    contador=contador +1;
	}
  system ("pause");

}
