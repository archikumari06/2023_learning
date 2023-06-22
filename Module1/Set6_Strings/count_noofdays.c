#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getMonthDays(int month, int year) {
    const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    
    return daysInMonth[month - 1];
}

int countDaysElapsed(const char* startDateStr, const char* endDateStr) {
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;
    
    sscanf(startDateStr, "%d/%d/%d", &startDay, &startMonth, &startYear);
    sscanf(endDateStr, "%d/%d/%d", &endDay, &endMonth, &endYear);
    
    int totalDays = 0;
    
    // Add days for each year
    for (int year = startYear; year < endYear; year++) {
        totalDays += isLeapYear(year) ? 366 : 365;
    }
    
    // Add days for each month in the start year
    for (int month = startMonth; month <= 12; month++) {
        totalDays += getMonthDays(month, startYear);
    }
    
    // Subtract days in the start month
    totalDays -= startDay;
    
    // Add days for each month in the end year
    for (int month = 1; month < endMonth; month++) {
        totalDays += getMonthDays(month, endYear);
    }
    
    // Add days in the end month
    totalDays += endDay;
    
    return totalDays;
}

int main() {
    const char* startDateStr = "10/04/2015";
    const char* endDateStr = "20/05/2017";
    
    int daysElapsed = countDaysElapsed(startDateStr, endDateStr);
    
    printf("Start Date: %s\n", startDateStr);
    printf("End Date: %s\n", endDateStr);
    printf("Number of days elapsed: %d\n", daysElapsed);
    
    return 0;
}
