#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //time funktion f�r zuf�lligeren Zufall
#include <stdlib.h> //srand und rand
#define MAX_LENGTH 10
#define MAX_NUMBER 100

/*Ziel: Sortieren eines int-Arrays mit Selection-Sort-Algorithmus
* Parameter: int* zahlen -> Zeiger auf das zu sortierende Array
* R�ckgabewert: -
*/
void selectSort(int* zahlen);