#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
int I;
float soma, media;
float md [5];	
soma = 0;
media = 0;
	
for ( I =0; I < 5; I++ ) {
	printf ("/n digite a media do %d ano. Aluno: ", I+1);
	scanf ("%f", &md[I]);
	soma = soma + md[I];
	}
	
media = soma /5;
printf ("A media da turma eh: %.2f ", media)	;
printf ("- O valor na linha 2 eh: %.2f.", md[1]);
	system ("PAUSE");


	
	
	return 0;
}
