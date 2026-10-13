
#include <stdio.h>

int main(void) {
    int c;
    double fahrenheit, kelvin;

    printf("Celsius\t\tFahrenheit\tKelvin\n");

    for (c = 0; c <= 100; c += 5) {
        fahrenheit = (9.0 * c) / 5.0 + 32.0;
        kelvin = c + 273.15;

        printf("%3d\t\t%10.2f\t%8.2f\n",
               c, fahrenheit, kelvin);
    }

    return 0;
}
