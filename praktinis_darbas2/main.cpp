#include <iostream>
#include <string>

int main() {
    std::string komanda = "Manchester City";
    std::string zaidejas = "Erling Haaland";

    int marskineliuNumeris = 9;
    int ivarciai, rungtynes;

    std::cout << "Iveskite zaidejo " << zaidejas <<" pelnytu ivarciu skaiciu pasaulio cempionate: ";
    std::cin >> ivarciai;
    std::cout << "Iveskite zaidejo " << zaidejas <<" zaistu rungtyniu skaiciu pasaulio cempionate: ";
    std::cin >> rungtynes;

    double ugis = 1.95;
    double svoris = 88.7;

    int svorisKonv = static_cast<int>(svoris);

    double ivarciuVidurkis = static_cast<double>(ivarciai)/rungtynes;

   std::cout << "Komanda: " << komanda << std::endl;
    std::cout << "Zaidejas: " << zaidejas << std::endl;
    std::cout <<"Numeris: " << marskineliuNumeris << std::endl;
    std::cout <<"Ugis: " << ugis << std::endl;
    std::cout <<"Svoris: " << svorisKonv << std::endl;
    std::cout <<"IVarcius: " << ivarciuVidurkis << std::endl;
return 0;
}