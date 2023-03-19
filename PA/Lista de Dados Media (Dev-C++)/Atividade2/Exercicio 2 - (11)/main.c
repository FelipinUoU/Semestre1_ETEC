int main(int argc, char *argv[]) {
	
float numero1, numero2, elevado, elevadoalt;
	
printf ("Digita um numero (Positivo) para noses aqui vai: ");	
scanf ("%f", &numero1);	
	
printf ("Digita um numero OUTRO (Positivo) para noses aqui vai: ");	
scanf ("%f", &numero2);	
	
	elevado=pow(numero1,numero2);	
	elevadoalt=pow(numero2,numero1);	
	
		printf ("Toma a elefacao dos numeros: \n");	
	printf (" \n");
		printf ("Primeira elevacao: %.1f\n", elevado);	
		printf ("Segunda elevacao: %.1f\n", elevadoalt);	
	
	
	
	
	return 0;
}
