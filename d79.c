// Q129.c
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) { perror("numbers.txt"); return 1; }

    long sum = 0;
    long count = 0;
    long x;
    while (fscanf(fp, "%ld", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No integers found.\n");
    } else {
        double avg = (double)sum / count;
        printf("Sum = %ld\nAverage = %.6f\n", sum, avg);
    }
    return 0;
}
