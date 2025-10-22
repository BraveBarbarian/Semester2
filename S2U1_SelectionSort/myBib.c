#include "myBib.h"


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