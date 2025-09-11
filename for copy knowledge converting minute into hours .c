#include <stdio.h>

int main() {
    int totalMinutes, hours, minutes;

    // Input total minutes
    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    // Calculate hours and minutes
    hours = totalMinutes / 60;

    // Output the result
    printf("%d minutes is equal to %d hours and %d minutes.\n", totalMinutes, hours, minutes);

    return 0;
}
