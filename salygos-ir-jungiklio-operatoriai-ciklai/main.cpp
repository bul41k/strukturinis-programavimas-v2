#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

/* 1 uzduotis ir 2 uzuodtis Patikrinimas vidurkis pazyma studentas
    int main() {

        const int studentGradesNum = 5;
        int grade;
        int highestGrade = 0;

        for (int i = 1; i < studentGradesNum; i++) {
            cout << "Iveskite " << i << " studento pazymi" << endl;
            cin >> grade;
            sum += grade;
        }
        double averageGrade = static_cast<double>(sum) / studentGradesNum;

        if (grade >= 5) {
            cout << "Vidurkis pazymis yra teigiama " << averageGrade << endl;
        } else {
            cout << "Vidurkis pazymis yra neigiama " << averageGrade << endl;
        }

        return 0;
    } */

// 3 uzudotis Patikrinimas balus egzaminas
/*    int main() {

        double grade;
        cout << "Iveskite savo egzaminus balus iki 10" << endl;
        cin >> grade;

        if (grade == 10) {
            cout << "Puiku" << endl;
        } else if (grade > 10) {
            cout << "Error" << endl;
        } else if (grade >= 9) {
            cout << "Labai gerai" << endl;
        } else if (grade >= 7) {
            cout << "Gerai" << endl;
        } else if (grade >= 5) {
            cout << "Patenkinamai" << endl;
        } else {
            cout << "Neislaikyta" << endl;
        }

        return 0;
    } */

// 4 uzudotis
    int main() {

        int grade;
        cout << "Iveskite savo egzaminus balus iki 10" << endl;
        cin >> grade;

        switch (grade) {
            case 10:
                cout << "Puiku";
                break;
            case 9:
                cout << "Labai gerai";
                break;
            case 8:
            case 7:
                cout << "Gerai";
                break;
            case 6:
            case 5:
                cout << "Patenkinamai";
                break;
            default:
                cout << "Neislaikyta";
                break;
        }

        return 0;
    }