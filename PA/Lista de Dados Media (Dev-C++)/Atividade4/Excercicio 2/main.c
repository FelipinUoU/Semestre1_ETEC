#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
int sexo; 	
float peso, altura;
	
printf ("Vou fazer uma media do seu peso. Informe a sua altura: ");	
scanf ("%f", &altura);	
	
printf ("Informe o seu sexo (se voce for homem: 2, e se for mulher: 1 ): ");
scanf ("%d", &sexo);	

/*1 = mulher, 2 = homem*/	
if (sexo==1)
	peso=(62.1*altura)-44.7;	
else							
	peso=(72.7*altura)-58;		

	 	
printf ("seu peso medio é esse: %.2f", peso);	
	
	
	return 0;
}
