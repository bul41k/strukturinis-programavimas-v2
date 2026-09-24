#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

/* 1 uzduotis ir 2 uzuodtis
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

// 3 uzudotis
    int main() {

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

    }