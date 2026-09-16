#include <iostream>
#include <cmath>
#include <vector>


void log(std::vector<std::vector<double>>& df) {
    for (auto& row : df) {
        for (auto& value : row) {
            if (value > 0) {
                value = std::log(value);
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

    // Calling the log function on the dataframe
    log(df);

    // Displaying each value after applying the natural logarithm
    for (const auto& row : df) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}