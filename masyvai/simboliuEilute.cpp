#include <iostream>
#include <string>
using namespace std;

int main() {
    string sakinys;
    cout << "Iveskite sakini: " << endl;
    getline(cin, sakinys);

    int aKiekis = 0;
    int tarpuKiekis = 0;
    int zodziuKiekis = 0;
    bool zodyje = false;

    for (size_t i = 0; i < sakinys.length(); i++) {
        char simbolis = sakinys[i];

        if (simbolis == 'a' || simbolis == 'A') aKiekis++;
        if (simbolis == ' '){
            tarpuKiekis++;
            zodyje = false;
        } else if (!zodyje) {
            zodyje = true;
            zodziuKiekis++;
        }
    }

    cout << "Raidziu kiekis A: " << aKiekis << endl;
    cout << "Tarpu kiekis: " << tarpuKiekis << endl;
    cout << "Zodziu kiekis: " << zodziuKiekis << endl;

    return 0;
}