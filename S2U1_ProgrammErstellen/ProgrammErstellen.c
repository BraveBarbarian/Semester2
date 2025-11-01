/*
	Dateiname: ProgrammErstellen.c
	Autor: Lars Rippert
	Version: 1.0
	Datum: 30.10.2025
	Beschreibung: Das Programm kombiniert die Funktionen MinMax, ProSum und SelectionSort
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //time funktion für zufälligeren Zufall
#include <stdlib.h> //srand und rand
#define MAX_ZAHLEN 10
#define MAX_LENGTH 10
#define MAX_NUMBER 100

/*
Ziel: Minimum und Maximum in einem double Array finden
Rückgabewerte: -
Parameter:	double a[]: Array mit Zahlen
			int n: Anzahl der Zahlen im Array
			double* min: Pointer auf Variable fuer kleinste Zahl
			double* max: Pointer auf Variable fuer groesste Zahl
*/
void minMax(double a[], int n, double* min, double* max);
/*Ziel: Sortieren eines int-Arrays mit Selection-Sort-Algorithmus
* Parameter: int* zahlen -> Zeiger auf das zu sortierende Array
* Rückgabewert: -
*/
void selectSort(int* zahlen);
/*
	Ziel: Berechnung von Produkt und Summe eines Arrays
	Rückgabewerte:	-
	Parameter:	int n: Anzahl der Zahlen im Array
				double* zahlen: Pointer auf Array mit Zahlen
				double* pro: Pointer auf Variable fuer Produkt
				double* sum: Pointer auf Variable fuer Summe
*/
void proSum(int n, double* zahlen, double* pro, double* sum);
/*
Ziel: Funktion zur double Eingabe
Rückgabewerte:	double
Parameter:	-
*/
double scanDouble();


int main() {
	//Varaiablen von MinMax.c
	double zahlen[MAX_ZAHLEN] = { 0 };
	int n = 0;
	double eingabe = 0, min = 0, max = 0;
	printf("--------------------------------------------------\n");
	printf("MinMax Programm\n");
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
	printf("--------------------------------------------------\n");
	//Variablen von ProSum.c
	double* pzahlen = &zahlen[0];
	double sum = 0;
	double pro = 1; //1 damit Produkt nicht immer 0
	double* ppro = &pro;
	double* psum = &sum;

	//Einlesen der Zahlen und speichern in Array
	printf("ProSum Programm\n");


	//Aufruf der Funktion proSum
	proSum(n, pzahlen, ppro, psum);

	printf("Sum : %.2lf\n", *psum);
	if (n == 0) //Abfrage ob keine Zahlen eingegeben wurden, da Produkt sonst 1 ist
		printf("Pro : 0.00\n");
	else
		printf("Pro : %.2lf\n", *ppro);
	
	printf("--------------------------------------------------\n");

	//Array mit zufälligen Zahlen füllen 
	int arr[MAX_LENGTH] = { '\0' };
	srand((unsigned int)time(NULL));
	printf("SelectionSort Programm\n");
	printf("Vor dem Sortieren\n");
	//Füllen und Ausgeben des Arrays
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		arr[i] = rand() % MAX_NUMBER+1;
		printf("%6d", arr[i]);
	}
	printf("\n");
	//Sortieren des Arrays und Ausgabe
	selectSort(arr);
	printf("Nach dem Sortieren\n");
	for (int i = 0; i < MAX_LENGTH; i++)
		printf("%6d", arr[i]);
	printf("\n");

	return 0;
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

/*Ziel: Sortieren eines int-Arrays mit Selection-Sort-Algorithmus
* Parameter: int* zahlen -> Zeiger auf das zu sortierende Array
* Rückgabewert: -
*/

void selectSort(int* zahlen) {
	if (zahlen == NULL) return;

	int hilf = 0;
	int j = 0, i = 0, min = 0;
	//Äußere Schleife für die Position im Array
	for (j = 0; j < MAX_LENGTH - 1; ++j) {
		min = j;
		for (i = j + 1; i < MAX_LENGTH; ++i) {
			if (*(zahlen + i) < *(zahlen + min))
				min = i;
		}
		//Tausch der Elemente an Position j und min
		if (min != j) {
			hilf = *(zahlen + j);
			*(zahlen + j) = *(zahlen + min);
			*(zahlen + min) = hilf;
		}
	}
}

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