#include<stdio.h>
#include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 int valorA, valorB, valorC;
 
 printf("Entre com o vbalor de A:");
 scanf("%d", &valorA);
 printf("Entre com o vbalor de B:");
 scanf("%d", &valorB);
 printf("Entre com o vbalor de C:");
 scanf("%d", &valorC);
 
 if (( valorA > valorB) && ( valorB > valorC)){
  printf("A sequencia e: %d %d %d", valorA, valorB, valorC);
 }
 
 if (( valorB > valorA) && ( valorA > valorC)){
  printf("A sequencia e: %d %d %d", valorB, valorA, valorC);
 }
 
 if (( valorC > valorA) && ( valorA > valorB)){
  printf("A sequencia e: %d %d %d", valorC, valorA, valorB);
 }
 
 if (( valorC > valorB) && ( valorB > valorA)){
  printf("A sequencia e: %d %d %d", valorC, valorB, valorA);
 }
}
