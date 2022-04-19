#include<stdio.h>


main(){
	
	int ano, idade;
	
	printf("Digite o seu ano de nascimento:");
	scanf("%d", &ano);
	
	idade = 2022-ano;
	
if ( idade >= 16){
	printf("Voce ja possui idade suficiente para votar! \n");
}

if ( idade < 16){
	printf("Voce ainda nao possui idade suficiente para votar! \n");
}

system("pause");
	 
}
