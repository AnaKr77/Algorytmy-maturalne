#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false); // Tablica odwiedzonych wierzchołków
    queue<int> q; // Kolejka do przetwarzania wierzchołków

    visited[start] = true; // Oznaczamy wierzchołek startowy jako odwiedzony
    q.push(start); // Dodajemy go do kolejki

    while (!q.empty()) {
        int current = q.front(); // Pobieramy pierwszy element z kolejki
        q.pop(); // Usuwamy go z kolejki
        cout << current << " "; // Wypisujemy odwiedzony wierzchołek

        // Przeglądamy sąsiadów bieżącego wierzchołka
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) { // Jeśli wierzchołek nie został odwiedzony
                visited[neighbor] = true; // Oznaczamy go jako odwiedzony
                q.push(neighbor); // Dodajemy do kolejki
            }
        }
    }
}

int main() {
    int n = 6; // Liczba wierzchołków
    vector<vector<int>> adj(n); // Lista sąsiedztwa grafu

    // Definicja grafu (graf nieskierowany)
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4};

    cout << "Przeszukiwanie wszerz (BFS) od wierzchołka 0:" << endl;
    BFS(0, adj, n); // Uruchamiamy BFS od wierzchołka 0

    return 0;
}
