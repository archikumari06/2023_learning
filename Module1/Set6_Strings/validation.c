#include <stdio.h>
#include <stdbool.h>
#include <regex.h>

bool validateEmail(const char* email) {
    regex_t regex;
    int result;

    // Regular expression pattern for email validation
    char pattern[] = "^[a-zA-Z0-9]+([._]?[a-zA-Z0-9]+)*@[a-z]+\\.[a-z]+$";

    // Compile the regular expression pattern
    result = regcomp(&regex, pattern, REG_EXTENDED);
    if (result != 0) {
        char errorBuffer[100];
        regerror(result, &regex, errorBuffer, sizeof(errorBuffer));
        printf("Regex compilation failed: %s\n", errorBuffer);
        return false;
    }

    // Execute the regular expression against the email string
    result = regexec(&regex, email, 0, NULL, 0);

    // Free the memory allocated for the regex
    regfree(&regex);

    if (result == 0) {
        return true; // Email format is valid
    } else {
        return false; // Email format is invalid
    }
}

int main() {
    const char* email1 = "hello@example.com";
    const char* email2 = "hello@example.org";
    const char* email3 = "mail2friend\"@hi5.com";
    const char* email4 = "mail2admin\"@Prog.org";
    const char* email5 = "guest_user@example.in";
    const char* email6 = "guest.user@example.com";

    printf("%s: %s\n", email1, validateEmail(email1) ? "Valid" : "Invalid");
    printf("%s: %s\n", email2, validateEmail(email2) ? "Valid" : "Invalid");
    printf("%s: %s\n", email3, validateEmail(email3) ? "Valid" : "Invalid");
    printf("%s: %s\n", email4, validateEmail(email4) ? "Valid" : "Invalid");
    printf("%s: %s\n", email5, validateEmail(email5) ? "Valid" : "Invalid");
    printf("%s: %s\n", email6, validateEmail(email6) ? "Valid" : "Invalid");

    return 0;
}
