#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char* timeStr) {
    char* token;
    char* rest;
    unsigned long totalSeconds = 0;
    unsigned long hours, minutes, seconds;
    
    // Tokenize the time string using ':'
    token = strtok((char*)timeStr, ":");
    
    // Extract hours, minutes, and seconds
    hours = strtoul(token, &rest, 10);
    token = strtok(NULL, ":");
    minutes = strtoul(token, &rest, 10);
    token = strtok(NULL, ":");
    seconds = strtoul(token, &rest, 10);
    
    // Compute total seconds
    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    return totalSeconds;
}

int main() {
    const char* timeStr = "10:12:50";
    unsigned long totalSeconds = computeTotalSeconds(timeStr);
    
    printf("Time: %s\n", timeStr);
    printf("Total seconds: %lu\n", totalSeconds);
    
    return 0;
}
