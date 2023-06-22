#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

void parseCSV(const char* filename, LogEntry entries[], int* numEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file: %s\n", filename);
        return;
    }

    char line[MAX_LINE_LENGTH];
    *numEntries = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (*numEntries >= MAX_ENTRIES) {
            printf("Maximum number of entries reached.\n");
            break;
        }

        char* token;
        int fieldIndex = 0;
        token = strtok(line, ",");

        while (token != NULL) {
            switch (fieldIndex) {
                case 0:
                    entries[*numEntries].entryNo = atoi(token);
                    break;
                case 1:
                    strcpy(entries[*numEntries].sensorNo, token);
                    break;
                case 2:
                    entries[*numEntries].temperature = atof(token);
                    break;
                case 3:
                    entries[*numEntries].humidity = atoi(token);
                    break;
                case 4:
                    entries[*numEntries].light = atoi(token);
                    break;
                case 5:
                    strcpy(entries[*numEntries].timestamp, token);
                    break;
                default:
                    break;
            }

            fieldIndex++;
            token = strtok(NULL, ",");
        }

        (*numEntries)++;
    }

    fclose(file);
}

void displayEntry(LogEntry entry) {
    printf("EntryNo: %d\n", entry.entryNo);
    printf("SensorNo: %s\n", entry.sensorNo);
    printf("Temperature: %.2f\n", entry.temperature);
    printf("Humidity: %d\n", entry.humidity);
    printf("Light: %d\n", entry.light);
    printf("Timestamp: %s\n", entry.timestamp);
    printf("\n");
}

void displayEntries(LogEntry entries[], int numEntries) {
    for (int i = 0; i < numEntries; i++) {
        displayEntry(entries[i]);
    }
}

int main() {
    LogEntry entries[MAX_ENTRIES];
    int numEntries = 0;

    parseCSV("data.csv", entries, &numEntries);
    displayEntries(entries, numEntries);

    return 0;
}
