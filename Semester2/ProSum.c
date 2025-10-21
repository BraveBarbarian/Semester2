/*
	Dateiname: ProSum.c
	Autor: Lars Rippert
	Version: 1.0
	Datum: 19.10.2015
	Beschreibung: Dieses Programm liest eine Reihe von double Zahlen ein und berechnet
				 die Summe und das Produkt der Zahlen.

*/

#include "myBib.h"


int main() {
	//Initialisierung von Variablen
	double zahlen[MAX_ZAHLEN] = { 0 };
	double* pzahlen = &zahlen[0];
	double sum = 0;
	double pro = 1; //1 damit Produkt nicht immer 0
	double* ppro = &pro;
	double* psum = &sum;
	int n = 0;
	double eingabe = 0;

	//Einlesen der Zahlen und speichern in Array
	printf("Geben Sie eine Reihe von Zahlen ein (Ende mit -1):\n");
	do
	{
		eingabe = scanDouble();
		//Abbruchbedingung -1
		if (eingabe == -1)
			break;
		zahlen[n] = eingabe;
		n++;
	} while (eingabe != -1);

	//Aufruf der Funktion proSum
	proSum(n, pzahlen, ppro, psum);

	printf("Sum : %.2lf\n", *psum);
	if (n == 0) //Abfrage ob keine Zahlen eingegeben wurden, da Produkt sonst 1 ist
		printf("Pro : 0.00\n");
	else
		printf("Pro : %.2lf\n", *ppro);


	return 0;
}