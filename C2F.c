#include <stdio.h>

int main() 
    {
    int lower, upper, step;
    printf("Enter lower, upper limits (Celsius) and step size: ");
    scanf("%d %d %d", &lower, &upper, &step);

    if (lower > upper || step <= 0) 
    {
        printf("Invalid input: Ensure lower < upper and step > 0.\n");
        return 1;
    }

    printf("\nCelsius\tFahrenheit\n-------\t----------\n");
    for (float celsius = lower; celsius <= upper; celsius += step)
        printf("%6.1f\t%10.1f\n", celsius, (9.0 / 5.0 * celsius) + 32);

    return 0;
}
