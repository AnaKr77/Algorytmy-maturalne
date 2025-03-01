#include <iostream>
#include <vector>

using namespace std;

void DFS(int k, vector<int>* tab, bool* visited)
{
    cout << "Odwiedzono " << k << " wierzcholek" << endl;
    visited[k] = true;

    for (int i = 0; i < tab[k].size(); i++)
    {
        if (!visited[tab[k][i]])  // Jeśli wierzchołek nie został odwiedzony
            DFS(tab[k][i], tab, visited);
    }
}

int main()
{
    int n = 5; // Przykładowa liczba wierzchołków
    vector<int> tab[n]; // Lista sąsiedztwa dla grafu o n wierzchołkach
    bool visited[n] = {false}; // Tablica odwiedzonych wierzchołków

    // Przykładowy graf nieskierowany
    tab[0].push_back(1);
    tab[0].push_back(2);
    tab[1].push_back(0);
    tab[1].push_back(3);
    tab[2].push_back(0);
    tab[2].push_back(4);
    tab[3].push_back(1);
    tab[4].push_back(2);

    // Uruchamiamy DFS od wierzchołka 0
    DFS(0, tab, visited);

    return 0;
}
