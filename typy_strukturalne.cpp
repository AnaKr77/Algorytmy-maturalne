#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    char nazwisko[10];
    double srednia;
};

bool porownaj(const student &a, const student &b) {
    return a.srednia > b.srednia;
}

int main() {
    student studenci[10];
    
    // Pobieranie danych od użytkownika
    for (int i = 0; i < 10; i++) {
        cout << "Podaj nazwisko studenta " << i + 1 << ": ";
        cin >> studenci[i].nazwisko;
        cout << "Podaj srednia studenta " << i + 1 << ": ";
        cin >> studenci[i].srednia;
    }
    
    // Sortowanie studentów według średniej
    sort(studenci, studenci + 10, porownaj);
    
    // Wyświetlanie posortowanych studentów
    cout << "\nLista studentów posortowana według średniej (malejąco):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << studenci[i].nazwisko << " - " << studenci[i].srednia << endl;
    }
    
    return 0;
}
