#include<stdio.h>
#include<locale.h>

 main(void){
	setlocale(LC_ALL, "Portuguese");
	float ang1, ang2, ang3;
	
	printf("Digite o valor do primeiro angulo:");
    scanf("%f", &ang1);
    printf("Digite o valor do segundo angulo:");
    scanf("%f", &ang2);
	printf("Digite o valor do terceiro angulo:");
    scanf("%f", &ang3); 
    
   if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
	  printf("Este e um Triangulo Retangulo: possui um angulo reto \n");
   } 
	 if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
	   printf("Este e um Triangulo Obtusangulo: possui um angulo obtuso \n");	
     } 
	   if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
    	printf("Este e um Triangulo Acutangulo: possui tres angulos agudos \n");	
       }

 system ("pause");
 }
