#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

// Function to calculate the difference between two time periods
TimePeriod calculateDifference(TimePeriod t1, TimePeriod t2) {
    TimePeriod diff;

    // Convert both time periods to seconds
    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    int diffSeconds = t1Seconds > t2Seconds ? t1Seconds - t2Seconds : t2Seconds - t1Seconds;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffSeconds / 3600;
    diff.minutes = (diffSeconds % 3600) / 60;
    diff.seconds = (diffSeconds % 3600) % 60;

    return diff;
}

int main() {
    TimePeriod t1, t2, diff;

    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &t1.hours);
    printf("Minutes: ");
    scanf("%d", &t1.minutes);
    printf("Seconds: ");
    scanf("%d", &t1.seconds);

    printf("Enter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &t2.hours);
    printf("Minutes: ");
    scanf("%d", &t2.minutes);
    printf("Seconds: ");
    scanf("%d", &t2.seconds);

    // Calculate the difference between the time periods
    diff = calculateDifference(t1, t2);

    // Display the difference
    printf("\nDifference: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
