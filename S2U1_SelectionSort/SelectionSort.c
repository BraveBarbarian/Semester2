#include "myBib.h"

int main() {
    int laenge = 0;
    int arr[MAX_LENGTH] = { '\0' };
    srand((unsigned int)time(NULL));
    printf("Vor dem Sortieren\n");
    for (int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] = rand() % MAX_NUMBER;
        printf("%6d", arr[i]);
        laenge++;
    }
    printf("\n");

    selectSort(laenge, arr);
    printf("Nach dem Sortieren\n");
    for (int i = 0; arr[i] = '\0'; i++)
        printf("%6d", arr[i]);
    printf("\n");

    return 0;
}