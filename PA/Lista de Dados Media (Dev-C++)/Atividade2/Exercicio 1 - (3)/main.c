int main(int argc, char *argv[]) {

float salario, aumento;

printf ("Você foi promovido colega! Sabe quanto vai ganhar?\n");
printf ("VAI SABER AGORA! So preciso do seu salario atual: ");
scanf ("%f", &salario);

		aumento= salario*(1+0.25);
					
printf ("Salario novo de alguem que acabou de ser promovido: %.1f R$", aumento);     

		

	return 0;
}
