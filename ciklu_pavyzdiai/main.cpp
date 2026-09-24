#include <iostream>
#include <string>
#include <iomanip>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // 1 pavyzdys Teigiamo skaiciaus ivedimas

    // 2 pavyzdzys Taupynas iki pasiinkto tikslo
    /* double savings = 100.0;
    const double target = 500.0;
    const double monthlyDeposit = 75.0;
    int month = 0;

    while (savings < target) {
        month++;
        savings += monthlyDeposit; // saving = savings + monthlyDeposit;
        std::cout << month << " menuo "
        <<std::fixed<< std::setprecision(2)
        << savings << " EUR" << std::endl;
    }

    std::cout << "Tikslas yra pasiektas per " << month << " menesius" << std::endl; */


    // 3 pavyzdys Slaptazodzio kurimas

    /* std::string password;

    do {
        std::cout << "Iveskite bent 8 simboliu slaptazodi ";
        std::cin >> password;

        if (password.length() < 8) {
            std::cout << " Slaptazodis turi buti maziausiai 8 simboliu " << std::endl;
        }
    } while (password.length() < 8);

    std::cout << "Slaptaodis priimtas"<< std::endl;
*/

    // 4 pavyzdzys. Saksiatos valdymo meniu
    int balance = 100;
    int choice;

    do {
        std::cout << "\n--- SASKAITOS MENIU ---\n";
        std::cout << "1. Perziureti saskaitos likutis\n";
        std::cout << "2. Papildyti saskaita\n";
        std::cout << "3. Atlikti mokejima\n";
        std::cout << "0. Baigti programa\n";
        std::cout << "Pasirinkite funkcija\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Saskaito likutis: " << balance << "Eur\n";
                break;

            case 2: {
                int amount;
                std::cout << "Papildymo suma: ";
                std::cin >> amount;

                    if (amount > 0) {
                        balance += amount;
                        std::cout << "Saskaita yra papildyta. \n";
                    } else {
                        std::cout << "Netinkama saskaita";
                    }
                    break;
                }

            case 3: {
                int amount;
                std::cout << "Mokejimo suma: ";
                std::cin >> amount;

                if (amount > 0) {
                    std::cout << "Neteisinga suma";
                } else if (amount > balance) {
                    std::cout << "Nepakankamas likutis saskaitoje. \n";
                } else {
                    balance -= amount;
                }
                break;
            }

            case 0:
                std::cout << "Programa baige darba";
            default:
                std::cout << "Tokios operacijos nera\n";
            }
        } while (choice != 0);


        return 0;
        // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
    }