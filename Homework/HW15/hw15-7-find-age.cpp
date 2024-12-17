#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[30];
    int birthYear, birthMonth, birthDay;
    int age_years, age_months;
};

int main() {
    FILE *file;
    struct person people[100];
    int count = 0, i;
    int maxAgeYears, maxAgeMonths, minAgeYears, minAgeMonths;
    struct person oldest, youngest;

    // Current date: June 21, 2561 BE
    int currentYear = 2561, currentMonth = 6, currentDay = 21;

    file = fopen("a15-7.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(file, "%*[^\n]\n"); // Skip header line

    while (fscanf(file, "%*d %s %d-%d-%d", people[count].name, &people[count].birthYear, &people[count].birthMonth, &people[count].birthDay) != EOF) {
        count++;
    }

    for (i = 0; i < count; i++) {
        int age_months = (currentYear - people[i].birthYear - 543) * 12 + currentMonth - people[i].birthMonth;
        if (currentDay < people[i].birthDay) {
            age_months--;
        }

        people[i].age_years = age_months / 12;
        people[i].age_months = age_months % 12;

        printf("%s %d Years, %d Months\n", people[i].name, people[i].age_years, people[i].age_months);

        if (i == 0 || people[i].age_years > maxAgeYears || (people[i].age_years == maxAgeYears && people[i].age_months > maxAgeMonths)) {
            maxAgeYears = people[i].age_years;
            maxAgeMonths = people[i].age_months;
            oldest = people[i];
        }

        if (i == 0 || people[i].age_years < minAgeYears || (people[i].age_years == minAgeYears && people[i].age_months < minAgeMonths)) {
            minAgeYears = people[i].age_years;
            minAgeMonths = people[i].age_months;
            youngest = people[i];
        }
    }

    printf("\nMax: %s (%d Years, %d Months)\n", oldest.name, maxAgeYears, maxAgeMonths);
    printf("Min: %s (%d Years, %d Months)\n", youngest.name, minAgeYears, minAgeMonths);

    fclose(file);
    return 0;
}