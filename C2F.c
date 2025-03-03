#include <stdio.h>

int main() 
    {
    int lower, upper, step;
    printf("Enter lower, upper limits (Celsius) and step size: ");
    scanf("%d %d %d", &lower, &upper, &step);

    if (lower > upper || step <= 0) 
    {
        printf("Invalid: The temperature you are submitting must be less than the ending temperature, and positive");
        return 1;
    }

    printf("\nTemperature in Celsius\tTemperature in Fahrenheit\n-----------------------\t-------------------------\n");
    for (float celsius = lower; celsius <= upper; celsius += step)
        printf("%6.1f\t%10.1f\n", celsius, (9.0 / 5.0 * celsius) + 32);

    return 0;
}
