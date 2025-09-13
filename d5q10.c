#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
