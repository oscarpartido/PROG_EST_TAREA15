/*AUTOR:Oscar Vivaldi Partido Ramirez  fecha:28/02/2022
Programa que le pida numeros al usuario y cuente el numero de entradas
que son positivas ,negativas y cero. 
el programa debe terminar cuando se introduce el numero 9999
*/

#include <stdio.h>

int main(){
	
int i=1;	
float numero, positivo, negativo,cero, sinValor;

do {
printf("Introduce el numero %d: ", i);
scanf("%f",&numero);	

if (numero<=-1){
	negativo ++;
}
else if(numero==9999){
	sinValor++;
}
else if(numero>=1){
	positivo++;
}
else if(numero==0){
	cero++;
}
	
i++;
}while(numero!=9999); 
printf("el total de negativos es: %.2f\n", negativo);
printf("el total de positivos es: %.2f\n", positivo);
printf("el total de ceros es :  %.2f",cero);

return 0;
}

