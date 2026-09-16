#include <iostream>
#include <cmath>
#include <vector>

void pow(std::vector<std::vector<double>>& df, double exponent) {
    for (auto& row : df) {
        for (auto& value : row) {
            value = std::pow(value, exponent);
        }
    }
}

void log(std::vector<std::vector<double>>& df) {
    for (auto& row : df) {
        for (auto& value : row) {
            value = std::log(value);
        }
    }
}

void exp(std::vector<std::vector<double>>& df) {
    for (auto& row : df) {
        for (auto& value : row) {
            value = std::exp(value);
        }
    }
}

int main() {
    // The sample dataframe modelled as a 2D vector
    std::vector<std::vector<double>> df = {
        {2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0}
    };

    // Applying exponential to every element
    exp(df);

    // Display the resulting dataframe
    for (const auto& row : df) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}