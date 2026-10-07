#include <iostream>
#include <string>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    }
    return "Taquicardia";
}

int main() {
    std::cout << "Temperatura en C: " << fahrenheitACelsius(98.6) << std::endl;
    std::cout << "72 lpm: " << clasificarFrecuencia(72) << std::endl;
    return 0;
}