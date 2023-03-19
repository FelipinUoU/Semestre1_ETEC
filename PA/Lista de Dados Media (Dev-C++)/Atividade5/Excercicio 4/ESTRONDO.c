#include <stdio.h>
#include <stdlib.h>

/*OBS*/

int main(int argc, char *argv[]) {
	
	float nota1, nota2, nota3, nota4, media;	
	
printf("Vamo ver se voce passou? NOTAS AGORA!!! Primeiro trimestre primeiro: ");	
scanf ("%f", &nota1);	
	
printf("Segundo trimestre: ");	
scanf ("%f", &nota2);	
	
printf("Terceiro trimestre: ");	
scanf ("%f", &nota3);	
	
printf("Quarto trimestre: ");	
scanf ("%f", &nota4);

		media =	(nota1 + nota2 + nota3 + nota4) /4;
	
	if (media>9)
	printf ("ES UM ALDALBERTO AINTEI? A" );
	
		else {
		if (media>=7&&media<=8.9)
		printf ("ESTUDAVA MAIS, E IRIA GANHAR UMA NOTA MAXIMA! B");
				
			else
			if (media>5&&media<=6.9)
			printf ("VOCE É MEDIOCRE! D");
	
				else
				if (media>2.5&&media<=4.9)
				printf ("VOCE É BURRO! C");
	
					else
					if (media<=2.5)
					printf ("VOCE PELO MENOS TENTOU? D");	
			}
			
	return 0;
}
