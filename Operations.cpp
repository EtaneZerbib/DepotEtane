#include "Operations.h"

int Addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int Soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int Multiplication(int a, int b)
{
	int resultat;
	
	resultat = a*b;
	
	return resultat;
}

int Division(int a, int b)
{
	int resultat;
	
	resultat = a/b;
	
	return resultat;
}	

int exposant(int nb, int exp)
{
	int resultat
	
	resultat = pow(nb,exp);
	
	return resultat
}	

int factoriel (int nb)
{
	int resultat = 1;
	
    while (nb > 1)
		
        resultat *= nb--;
	
    return resultat;
	
}


return 0