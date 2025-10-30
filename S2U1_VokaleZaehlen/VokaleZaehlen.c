/*
	Dateiname: VokaleZaehlen.c
	Autor: Lars Rippert
	Version: 1.0
	Datum: 22.10.2024
	Beschreibung: Programm zählt Vokale in einem String
	*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LENGTH 100 //Maximale Länge des Strings


/*
Ziel: Zählt die Anzahl der Vokale in einem String
Parameter: pointer auf einen String
Rückgabewert: int als Anzahl der Vokale im String
*/
int vokaleString(char* str);

/*
Ziel: Zählen der Vokale in einem Stringvektor
Parameter: Anzahl der Strings im Stringvektor, pointer auf einen Stringvektor
Rückgabewert: int als Anzahl der Vokale im Stringvektor
*/
int vokaleStringVektor(int anzahl, char* str[]);

int main() {
	char string[MAX_LENGTH] = { '\0' };
	char* pstring = string;
	//Alternativ viele einzelne Strings in einem Array zusammenfügen
	char* strings[] = { "Hallo", "Das", "sind", "einige", "Strings", "die", "ich", "ausgewaehlt", "habe" };
	int anzahl = 0;
	//Stringeingabe mit fgets um auch Leerzeichen zu erlauben
	printf("Bitte geben Sie einen String ein!:\n");
	fgets(string,MAX_LENGTH,stdin);

	//Ausgabe der Anzahl der Vokale im String und im Stringvektor
	printf("Der eingegebene String besitzt %d Vokale", vokaleString(pstring));
	//berechnen der Anzahl der Strings im Stringvektor mithilfe von Byterechnung
	anzahl = sizeof(strings) / sizeof(strings[0]); //ggf. sonst mit NULL am ende des arrays arbeiten. 
	printf("\n\nDer Vektor aus Strings besitzt insgesamt %d Vokale", vokaleStringVektor(anzahl, strings));

	return 0;
}

/*
Ziel: Zählt die Anzahl der Vokale in einem String
Parameter: pointer auf einen String
Rückgabewert: int als Anzahl der Vokale im String
*/
int vokaleString(char* str) {

	int anzahlVokale = 0;
	char vokale[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0' }; //Optional auch mit if(str[i] == 'a' ||...)

	for (int i = 0; *(str + i) != '\0'; i++)
	{
		for (int j = 0; vokale[j] != '\0'; j++)
		{
			if (*(str + i) == vokale[j]) {
				anzahlVokale++;
				break;
			}
		}
	}
	return anzahlVokale;
}

/*
Ziel: Zählen der Vokale in einem Stringvektor
Parameter: Anzahl der Strings im Stringvektor, pointer auf einen Stringvektor
Rückgabewert: int als Anzahl der Vokale im Stringvektor
*/
int vokaleStringVektor(int anzahl, char* str[]) {
	int anzahlVokale = 0;
	//Aufruf der Funktion vokaleString für jeden String im Stringvektor
	for (int i = 0; i < anzahl; i++) {
		anzahlVokale += vokaleString(str[i]);
	}
	return anzahlVokale;
}