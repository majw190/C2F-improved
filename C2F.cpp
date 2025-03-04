#include <iostream>
#include <iomanip>

int main() 
{
    int lower, upper, step;
    std::cout << "Enter your lower & upper limits (celsius) and final step size: ";
    std::cin >> lower >> upper >> step;

    if (lower > upper || step <= 0) {
        std::cout << "Invalid: The temperature you are submitting must be less than the ending temperature, and positive\n";
        return 1;
    }

    std::cout << "\nTemperature in Celsius\tTemperature in Fahrenheit\n";
    std::cout << "-----------------------\t-------------------------\n";

    for (float celsius = lower; celsius <= upper; celsius += step) 
    {
        std::cout << std::setw(6) << celsius << "\t" << std::setw(10) << (9.0f / 5.0f * celsius) + 32 << "\n";
    }

    return 0;
}
