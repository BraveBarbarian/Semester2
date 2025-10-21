

#include "myBib.h"


void selectSort(int laenge, int* zahlen) {

	int gross = 0, klein = 0, hilf = 0;
	int j = 0, i = 0, min = 0;
	
	while (j = laenge-1)
	{
		min = j;
		i = j + 1;
		while (i < laenge)
		{
			if (*(zahlen + i) < *(zahlen + min))
				min = i;
			i++;
		}
		hilf = *(zahlen + j);
		*(zahlen + j) = *(zahlen+min);
		*(zahlen + j) = hilf;
		j++;
	}


	return;
}