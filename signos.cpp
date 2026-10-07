#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    std::cout << "Temperatura en C: " << fahrenheitACelsius(98.6) << std::endl;
    return 0;
}