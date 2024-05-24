/*Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>

int main() {
    int population = 100000;
    double growth_rate = 0.10; // 10% growth rate

    printf("Population at the end of each year in the last decade:\n");
    printf("Year\tPopulation\n");

    for (int year = 1; year <= 10; year++) {
        population += population * growth_rate;
        printf("%d\t%d\n", year, population);
    }

    return 0;
}
/*OUTPUT:
Population at the end of each year in the last decade:
Year    Population
1       110000
2       121000
3       133100
4       146410
5       161051
6       177156
7       194871
8       214358
9       235793
10      259372*/