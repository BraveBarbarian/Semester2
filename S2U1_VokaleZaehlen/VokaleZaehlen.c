
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LENGTH 100 

int vokaleString(char* str);

int main() {
	char string[MAX_LENGTH] = { '\0' };
	char* pstring = string;
	
	printf("Bitte geben Sie einen String ein!:\n");
	fgets(string, MAX_LENGTH, stdin);
	while (getchar() != '\n');

	printf("Der eingegebene String besitzt %d Vokale", vokaleString(pstring));

	return 0;
}

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
