#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Ziel: Header-Datei mit Funktionsdeklarationen fuer MinMax.c
Rückgabewerte: -
Parameter:	double a[]: Array mit Zahlen
			int n: Anzahl der Zahlen im Array
			double* min: Pointer auf Variable fuer kleinste Zahl
			double* max: Pointer auf Variable fuer groesste Zahl
*/
void minMax(double a[], int n, double* min, double* max);

/*
Ziel: Funktion zur double Eingabe
Rückgabewerte:	double
Parameter:	-
*/
double scanDouble();