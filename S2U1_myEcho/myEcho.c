/*
	Datei: myEcho.c
	Autor: Lars Rippert
	Version: 1.0
	Datum: 30.10.2024
	Beschreibung: Programm, welches die übergebenen Argumente der cmd ausgibt
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ARGS 10

int main(int argc, char* argv[]) {
	char* zeiger[MAX_ARGS] = {'\0'};
	for (int i = 0; i < argc; i++)
	{
		*(zeiger + i) = argv[i];
	}

	//fehlerbehandlung für reduzierung der argumente auf maximal 10
	if (argc >= MAX_ARGS) {
		printf("Fehler: Zu viele Argumente. Maximal 10 Argumente erlaubt.\n");
		//ggf Programm mit Fehlercode returnen
	} else {
		//Ausgabe der Anzahl der Argumente und der Argumente selbst
		printf("Anzahl der Argumente: %d\n", argc - 1);
		for (int i = 0; i < argc; i++) {
			printf("Argument %d: \"%s\"\n", i+1, argv[i]);
		}
	}

	//Ausgabe in umgekehrter Reihenfolge
	for (int j = argc - 1; j >= 0; j--) {
		printf("Zeigervektor Argument %d: \"%s\"\n", j+1, argv[j]);
	}

	return 0;
}
