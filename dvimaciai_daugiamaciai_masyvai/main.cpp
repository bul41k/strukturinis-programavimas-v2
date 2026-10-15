#include <iostream>
#include <iomanip>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    const int MAX_STUDENTS = 30;
    const int MAX_DALYKAI = 15;

    int pazymiai[MAX_STUDENTS][MAX_DALYKAI];
    int stud_kiekis, dalyku_kiekis;

    cout << "Iveskite studnetu skaicius " << endl;
    cin >> stud_kiekis;
    cout << "Iveskite dalyku skaicius " << endl;
    cin >> dalyku_kiekis;

    if (stud_kiekis < 1 || stud_kiekis > MAX_STUDENTS || dalyku_kiekis < 1 || dalyku_kiekis > MAX_DALYKAI) {
        cout << "klaida: netinkamas mokiniu ar dalyku kiekis" << endl;
        return 1; // kazkas negerai ir sustabdo
    } for (int i = 0; i < stud_kiekis; i++) {
        cout << "Iveskite" << i+1 << " studento pazymius" << endl;
        for (int j = 0; j < dalyku_kiekis; j++) {
            cout << "Iveskite" << j+1 << " dalyku pazymi (1-10)" << endl;
            cin >> pazymiai[i][j];
        }
    }
        cout << "\n" << left << setw(12) << "Studentas" << endl;
        cout << setw(30) << "Ivertinimai: " << endl;
        for (int i = 0; i < stud_kiekis; i++) {
            for (int j = 0; j < dalyku_kiekis; j++) {
                cout <<"Studento " << i+1 << "ivertinimai: ";
                for (int j = 0; j < dalyku_kiekis; j++) {
                    cout << pazymiai[i][j] << " ";
                }
                cout << endl;
            }
        }
        return 0; // viskas tvrakoj ir veikia
    }