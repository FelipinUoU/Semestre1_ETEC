#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

float distancia, litros, velocidade, tempo;

printf ("Tempo gasto na viagem de carro: ");
scanf ("%f", &tempo);

printf ("Velocidade em media na viagem: ");
scanf ("%f", &velocidade);

	distancia= tempo*velocidade;
	litros=distancia/12;

printf ("Seus Resultados: \n");
printf ("Velocidade em Média: %.1f KH\n", velocidade);
printf ("Tempo Gastos: %.1f\n", tempo);
printf ("Distancia: %.1f\n", distancia);
printf ("Litros Gastada: %.1f\n", litros);


return 0;
}
