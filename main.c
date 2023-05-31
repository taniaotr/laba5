#include "output.c"

int main()
{
    int numCities;
    cityInfo* cities;
    
    if (readDataFromFile("input.txt", &cities, &numCities) == 1) {
        return 1;
    }
    
    sortCities(cities, numCities);   
    printSortedCityList(cities, numCities);
    
    free(cities);   
    
    return 0;
}