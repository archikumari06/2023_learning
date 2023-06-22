#include <stdio.h>
#include <time.h>

int main() {
    struct tm date;
    time_t now, elapsed;
    int days;

    // Set the input date
    date.tm_sec = 0;
    date.tm_min = 0;
    date.tm_hour = 0;
    date.tm_mday = 10;    // Day
    date.tm_mon = 0;      // Month - 0 indexed (0 = January, 1 = February, etc.)
    date.tm_year = 22;    // Year - 2-digit representation (e.g., 22 for 2022)

    // Get current time
    time(&now);

    // Convert input date to calendar time
    elapsed = mktime(&date);

    // Calculate the difference in seconds
    elapsed = now - elapsed;

    // Convert seconds to days
    days = elapsed / (24 * 60 * 60);

    printf("Number of days elapsed: %d\n", days);

    return 0;
}
