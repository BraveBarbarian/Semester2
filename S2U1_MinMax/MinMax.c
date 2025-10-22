/*
	Dateiname: MinMax.c
	Autor: Lars Rippert
	Version: 1.0
	Datum: 22.10.2015
	Beschreibung: Dieses Programm liest eine Reihe von Ganzzahlen ein und bestimmt die
				 kleinste und groesste Zahl
*/



#include "myBib.h"

int main()
{
	//Initialisierung von Variablen
	double zahlen[100] = { 0 };
	int n = 0;
	double eingabe = 0, min = 0, max = 0;
	printf("Geben Sie eine Reihe von Zahlen ein (Ende mit -1):\n");

	//Einlesen der Zahlen und speichern in Array
	do
	{
		eingabe = scanDouble();
		if (eingabe == -1)
			break;
		zahlen[n] = eingabe;
		n++;
	} while (eingabe != -1);

	minMax(zahlen, n, &min, &max);

	printf("Kleinste Zahl: %.2lf\n", min);
	printf("Groesste Zahl: %.2lf\n", max);

	return 0;
}