#include "solve.c"

static void printSortedCityList(cityInfo* cities, int numCities) {
    printf("Список міст (відсортовано за відношенням кількості студентів до населення):\n");
    for (int i = 0; i < numCities; i++) {
        printf("Місто: %s, Відношення студентів/населення: %.2f\n",
               cities[i].name,
               (double)cities[i].students / cities[i].population);
    }
}