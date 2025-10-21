#include "myBib.h"


/*
Ziel: Header-Datei mit Funktionsdeklarationen fuer MinMax.c
Rückgabewerte: -
Parameter:	double a[]: Array mit Zahlen
			int n: Anzahl der Zahlen im Array
			double* min: Pointer auf Variable fuer kleinste Zahl
			double* max: Pointer auf Variable fuer groesste Zahl
*/

void minMax(double a[], int n, double* min, double* max)
{
	//Minimal- und Maximalwert initialisieren (erstes Arrayelement)
	*min = a[0];
	*max = a[0];

	//Array durchlaufen und pruefen ob größer/kleiner als aktueller min/max Wert
	for (int i = 1; i < n; i++)
	{
		if (a[i] < *min)
			*min = a[i];
		if (a[i] > *max)
			*max = a[i];
	}
}

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