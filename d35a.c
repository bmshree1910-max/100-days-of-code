// Q99: Change the date format from dd/mm/yyyy to dd-MMM-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int mm;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    sscanf(date, "%*d/%d/%*d", &mm);
    strncpy(month, months[mm - 1], 3);

    int dd, yyyy;
    sscanf(date, "%d/%*d/%d", &dd, &yyyy);

    printf("Formatted Date: %02d-%s-%04d\n", dd, month, yyyy);
    return 0;
}
