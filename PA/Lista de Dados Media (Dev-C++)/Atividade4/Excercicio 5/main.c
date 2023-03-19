#include <stdio.h>
#include <stdlib.h>

/*OBS*/

int main(int argc, char *argv[]) {

	float bi1, bi2, bi3, bi4, media;
	
printf ("Coloca sua nota do 1º bimestre ai: " );
scanf ("%f", &bi1);

printf ("Coloca sua nota do 2º bimestre ai: " );
scanf ("%f", &bi2);	

printf ("Coloca sua nota do 3º bimestre ai: " );
scanf ("%f", &bi3);

printf ("Coloca sua nota do 4º bimestre ai: " );
scanf ("%f", &bi4);
	
media=(bi1+bi2+bi3+bi4)/4;		
	
if (media>=7.00)	
printf ("VOCE PASSOU DESGRAMENTO!!! SUA MEDIA AI: %.2f", media);	
	else 
	printf ("VOCE É BURRO EM!!! REPROVADO! SUA MEDIA AI: %.2f", media);
	
	
	
	
	return 0;
}
