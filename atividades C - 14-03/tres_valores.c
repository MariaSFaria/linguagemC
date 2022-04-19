#include<stdio.h>
#include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 int valorA, valorB, valorC;
 
 printf("Entre com o valor de A:");
 scanf("%d", &valorA);
 printf("Entre com o valor de B:");
 scanf("%d", &valorB);
 printf("Entre com o valor de C:");
 scanf("%d", &valorC);
 
 if (( valorA > valorB) && ( valorB > valorC)){
  printf("A sequencia e: %d %d %d", valorA, valorB, valorC);
 }
 
 if (( valorA > valorC) && ( valorC > valorB)){
  printf("A sequencia e: %d %d %d", valorA, valorC, valorB);
 }
 
 if (( valorB > valorA) && ( valorA > valorC)){
  printf("A sequencia e: %d %d %d", valorB, valorA, valorC);
 }
 
 if (( valorB > valorC) && ( valorC > valorA)){
  printf("A sequencia e: %d %d %d", valorB, valorC, valorA);
 }
 
 if (( valorC > valorA) && ( valorA > valorB)){
  printf("A sequencia e: %d %d %d", valorC, valorA, valorB);
 }
 
 if (( valorC > valorB) && ( valorB > valorA)){
  printf("A sequencia e: %d %d %d", valorC, valorB, valorA);
 }
}
