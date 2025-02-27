#include <iostream>
using namespace std;

//wyznaczanie rozkładu na czynniki pierwsze za pomocą sita Eratostenesa

const int MAX_N = 1000001;
int t[MAX_N];  // Tablica najmniejszych dzielników

void sito() {
    for (int i = 2; i < MAX_N; i++) t[i] = i;  // Każda liczba początkowo jest "sama sobą"

    for (int i = 2; i * i < MAX_N; i++) {
        if (t[i] == i) {  // Jeśli i jest liczbą pierwszą
            for (int j = i * i; j < MAX_N; j += i) {
                if (t[j] == j)  // Tylko jeśli nie było wcześniej zmienione
                    t[j] = i;
            }
        }
    }
}

void rozklad(int n) {
    while (n > 1) {
        cout << t[n] << endl;
        n /= t[n];
    }
}

int main() {
    sito();  // Obliczamy sito Eratostenesa

    int n;
    cin >> n;

    rozklad(n);  // Rozkładamy liczbę na czynniki pierwsze

    return 0;
}
