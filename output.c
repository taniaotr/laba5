#include "solve.c"

static void printSortedCityList(cityInfo* cities, int numCities) {
    printf("������ ��� (����������� �� ���������� ������� �������� �� ���������):\n");
    for (int i = 0; i < numCities; i++) {
        printf("̳���: %s, ³�������� ��������/���������: %.2f\n",
               cities[i].name,
               (double)cities[i].students / cities[i].population);
    }
}