#include <stdio.h>
#include <stdlib.h>
#include "1.c"

static int readDataFromFile(const char* filename, cityInfo** cities, int* numCities) {
    FILE* inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("Помилка відкриття файлу %s\n", filename);
        return 0;
    }

    fscanf(inputFile, "%d", numCities);   // Зчитування кількості міст з файлу

    *cities = (cityInfo*)malloc(*numCities * sizeof(cityInfo));   // Виділення пам'яті для динамічного масиву структур cities
    if (*cities == NULL) {
        printf("Помилка виділення пам'яті\n");
        fclose(inputFile);
        return 1;
    }

    for (int i = 0; i < *numCities; i++) {
        // Зчитування даних про міста з файлу та збереження їх у відповідні поля структур
        fscanf(inputFile, "%s %d %d %d", (*cities)[i].name, &(*cities)[i].population, &(*cities)[i].universities, &(*cities)[i].students);
    }

    fclose(inputFile);
    return 0;
}