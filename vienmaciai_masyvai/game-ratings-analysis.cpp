#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    const int STUDENTU_KIEKIS = 40;
    const int MAZIAUSIAS = 1;
    const int DIDZIAUSIAS = 10;
    int pazymiai [STUDENTU_KIEKIS];
    int dazniai[DIDZIAUSIAS+1] = {0};

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        int pazymys;
        do {
            cout << "Iveskite" << i+1 << " kiek ivertinti game (1-10)"<<endl;
            cin >> pazymys;
        } while (pazymys < MAZIAUSIAS || pazymys > DIDZIAUSIAS);
        pazymiai[i] = pazymys;
    }

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        dazniai[pazymiai[i]]++;
    }

    cout << "Pazymiu dazniai" << endl;
    for (int pazymys = MAZIAUSIAS; pazymys <= DIDZIAUSIAS; pazymys++) {
        if (dazniai[pazymys] > 0) {
            cout << "Pazymys: " <<  pazymys << " pasikartoje: " << dazniai[pazymys] << endl;
        }
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}