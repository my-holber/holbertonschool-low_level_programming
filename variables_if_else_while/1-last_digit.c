#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * principal - Affiche un texte selon le numero
 *
 * Retourne: Toujours (Succes)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int dernierChiffre = (n) % 10;
	if (n > 5)
	{
		printf("the string  %dand%d is greater than 5\n", n, dernierChiffre);
	}
	else if (n == 0)
	{
		printf("the string %dand%d is 0", n, dernierChiffre);
	}
	else if (n < 6 && n != 0)
	{
		printf(" the string %dand%d is less than 6 and not 0\n", n, dernierChiffre);
	}
	return (0);
}
