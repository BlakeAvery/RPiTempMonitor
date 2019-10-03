#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
 * This fucking thing is terrifying kill it please i wannt to die
 */
int main() {
    FILE *file;
    file = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    char jeff[6];
    fgets(jeff, 6, file);
    double temp = strtod(jeff, NULL) / 1000.0;
    double f = (temp * 9.0 / 5.0) + 32.0;
    printf("Current temp is %f degrees celsius or %f degrees fahrenheit.\n", temp, f);
    sleep(5);
    system("clear");
    return 0;
}