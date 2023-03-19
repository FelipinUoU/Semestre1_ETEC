#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float num1, num2, resultado;
								int ESCOLHAuser;
		/*Esse 13 significa o maximo de palavras que a variavel pode guardar*/


printf ("voce desseja fazer uma 'soma: 1', 'subtração: 2', 'multiplicação: 3' ou 'divisão: 4'? Escreva o que deseja:  ");
scanf ("%d", &ESCOLHAuser);

	printf ("agora digite um numero: ");
	scanf ("%f", &num1);
 
	printf ("agora digite outro numero: ");
	scanf ("%f", &num2);

switch (ESCOLHAuser){
	
	case 1: resultado= num1 + num2; 
							 break;
							   
	case 2: resultado= num1 - num2; 
							 break;
							   
	case 3: resultado= num1 * num2; 
							 break;
							   
	case 4: resultado= num1 / num2; 
						   	 break;							   							   
default: return 0;
break;
			
}

printf ("O seu resultado é: %.2f", resultado);



return 0;}
