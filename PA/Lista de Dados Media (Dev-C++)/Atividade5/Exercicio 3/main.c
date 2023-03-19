#include <stdio.h>
#include <stdlib.h>

/*OBS*/

int main(int argc, char *argv[]) {

	int idade;

printf ("De sua idade, e diremos se esta no intervalo: ");
scanf ("%d", &idade);

	if(idade>=10&&idade<=18)
		printf("Voce esta na idade perfeita meu nobre.");
	else
		printf("ISSO NÃO É PARA VOCE!");
	
	
	
	return 0;
}
