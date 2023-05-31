#include <stdio.h>
#include <stdlib.h>
#include "1.c"

static int readDataFromFile(const char* filename, cityInfo** cities, int* numCities) {
    FILE* inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("������� �������� ����� %s\n", filename);
        return 0;
    }

    fscanf(inputFile, "%d", numCities);   // ���������� ������� ��� � �����

    *cities = (cityInfo*)malloc(*numCities * sizeof(cityInfo));   // �������� ���'�� ��� ���������� ������ �������� cities
    if (*cities == NULL) {
        printf("������� �������� ���'��\n");
        fclose(inputFile);
        return 1;
    }

    for (int i = 0; i < *numCities; i++) {
        // ���������� ����� ��� ���� � ����� �� ���������� �� � ������� ���� ��������
        fscanf(inputFile, "%s %d %d %d", (*cities)[i].name, &(*cities)[i].population, &(*cities)[i].universities, &(*cities)[i].students);
    }

    fclose(inputFile);
    return 0;
}