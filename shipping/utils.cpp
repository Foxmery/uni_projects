#include "utils.h"

void clear_faulty_input(const std::string &message)
{
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    std::cout << message;
}

int read_int_in_range(const int &min, const int &max)
{
    int value;

    while (true)
    {
        if (std::cin >> value)
        {
            if (value >= min && value <= max)
                return value;    // valid → return
            else
                std::cout << "Please enter a number between "
                     << min << " and " << max << ".\n";
        }
        else
        {
            // clear bad input
            clear_faulty_input("Please Enter a number.\n");
        }
    }

    return 0;
}