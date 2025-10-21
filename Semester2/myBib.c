
#include "myBib.h"






/*
Ziel: Funktion zur double Eingabe
Rückgabewerte:	double
Parameter:	-
*/
double scanDouble()
{
	int pruef = 0;
	double zahl;
	do
	{
		//Eingabeaufforderung mit pruefung
		printf("Geben Sie eine Zahl ein: ");
		pruef = scanf("%lf", &zahl);
		while (getchar() != '\n');
	} while (pruef != 1);
	return zahl;
}


/*
	Ziel: Berechnung von Produkt und Summe eines Arrays
	Rückgabewerte:	-
	Parameter:	int n: Anzahl der Zahlen im Array
			double* zahlen: Pointer auf Array mit Zahlen
			double* pro: Pointer auf Variable fuer Produkt
			double* sum: Pointer auf Variable fuer Summe
*/
void proSum(int n, double* zahlen, double* pro, double* sum) {

	for (int i = 0; i < n; i++)
	{
		*sum += zahlen[i];
	}

	for (int i = 0; i < n; i++)
	{
		*pro *= zahlen[i];
	}


	return;
}