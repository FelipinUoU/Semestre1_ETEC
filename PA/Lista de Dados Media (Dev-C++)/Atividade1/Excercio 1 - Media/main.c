#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


float media, num1, num2, num3, num4; 

printf ("Digite a nota do primeiro Bimestre\n");
scanf ("%f", &num1);

printf ("Digite a nota do segundo Bimestre\n");
scanf ("%f", &num2);

printf ("Digite a nota do terceirro Bimestre\n");
scanf ("%f", &num3);

printf ("Digite a nota do quarto Bimestre\n");
scanf ("%f", &num4);

media= (num1+num2+num3+num4)/4;

printf ("Media Final: %.2f\n", media);



	return 0;
}
