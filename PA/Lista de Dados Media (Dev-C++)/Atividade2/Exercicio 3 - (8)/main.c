int main(int argc, char *argv[]) {

float deposito, juros, meses;

printf ("Quanto voce deseja depositar?: ");
scanf ("%f", &deposito);

printf ("Qual a sua porcentagem de juros?: ");
scanf ("%f", &juros);   

		
	meses=	deposito*(1+juros/100);	
		
printf ("Daqui a cinco meses, voce tera isso na conta: %.1f R$", meses);		
		
		
		

	return 0;
}
