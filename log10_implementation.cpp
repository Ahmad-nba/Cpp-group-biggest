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

void log10(std::vector<std::vector<double>>& df) {
    for (auto& row : df) {
        for (auto& value : row) {
            value = std::log10(value);
        }
    }
}

int main() {
    std::vector<std::vector<double>> df = {
        {2.0, 8.0, 4.0},
        {5.0, 6.0, 5.0}
    };

    log10(df);

    for (const auto& row : df) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}