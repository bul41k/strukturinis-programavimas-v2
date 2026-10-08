#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    const int KIEKIS = 5;
    int skaiciai[KIEKIS];
    int suma = 0;
    for (int i = 0; i < KIEKIS; i++) {
        cout << "Iveskite skaiciu: " ;
        cin >> skaiciai[i];
        suma += skaiciai[i];
    }

    int maziausias = skaiciai[0];
    int didziausias = skaiciai[0];
    for (int i = 1; i < KIEKIS; i++) {
        if (skaiciai[i] < maziausias) maziausias = skaiciai[i];
        if (skaiciai[i] > didziausias) didziausias = skaiciai[i];
    }

    cout << suma << " ir didziausias " << didziausias << " ir maziausasias " << maziausias << endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}