/*
   Datei:     SelectionSort.c
   Autor:     Lars Rippert
   Datum:     22.10.2021
   Version:   1.0
   Beschreibung: Implementierung des Selection-Sort-Algorithmus mit pointern

*/



#include "myBib.h"

int main() {
	//Array mit zufälligen Zahlen füllen 
    int arr[MAX_LENGTH] = { '\0' };
    srand((unsigned int)time(NULL));
    printf("Vor dem Sortieren\n");
	//Füllen und Ausgeben des Arrays
    for (int i = 0; i < MAX_LENGTH; i++)
    {
        arr[i] = rand() % MAX_NUMBER;
        printf("%6d", arr[i]);
    }
    printf("\n");
	//Sortieren des Arrays und Ausgabe
    selectSort(arr);
    printf("Nach dem Sortieren\n");
    for (int i = 0;i < MAX_LENGTH; i++)
        printf("%6d", arr[i]);
    printf("\n");

    return 0;
}