#include <iostream>
#include <cmath>
#include <vector>

void modulo(std::vector<std::vector<double>>& df, double divisor) {
    for (auto& row : df) {
        for (auto& value : row) {
            if (divisor != 0) {
                value = std::fmod(value, divisor);
            }
        }
    }
}

int main() {
    // The sample dataframe modelled as a 2D vector
    std::vector<std::vector<double>> df = {
        {2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0}
    };

    // Calling the modulo function on the dataframe
    double divisor = 3.0;
    modulo(df, divisor);

    // Displaying each value after applying the modulo operation
    for (const auto& row : df) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
