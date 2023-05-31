#include "create.c"

static void sortCities(cityInfo* cities, int numCities) {
    int i, j;
    for (i = 0; i < numCities - 1; i++) {
        for (j = 0; j < numCities - i - 1; j++) {
            if ((double)cities[j].students / cities[j].population < (double)cities[j + 1].students / cities[j + 1].population) {
                cityInfo temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }
}