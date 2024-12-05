#include <iostream>

using namespace std;

// FUnctia de merge (imbinare)
void imbinare(int v[], int stanga, int mijloc, int dreapta) {
    int dimensiune1 = mijloc - stanga + 1;
    int dimensiune2 = dreapta - mijloc;

    // Cream doua subliste temporare
    int stangaLista[dimensiune1], dreaptaLista[dimensiune2];

    // Copiem datele în sublistele temporare
    for (int i = 0; i < dimensiune1; i++)
        stangaLista[i] = v[stanga + i];
    for (int i = 0; i < dimensiune2; i++)
        dreaptaLista[i] = v[mijloc + 1 + i];

    // Îmbinam cele doua subliste sortate
    int i = 0, j = 0, k = stanga;
    while (i < dimensiune1 && j < dimensiune2) {
        if (stangaLista[i] <= dreaptaLista[j]) {
            v[k] = stangaLista[i];
            i++;
        } else {
            v[k] = dreaptaLista[j];
            j++;
        }
        k++;ì
    }

    // Copiem elementele ramase din stangaLista, daca exista
    while (i < dimensiune1) {
        v[k] = stangaLista[i];
        i++;
        k++;
    }

    // Copiem elementele ramase din dreaptaLista, daca exista
    while (j < dimensiune2) {
        v[k] = dreaptaLista[j];
        j++;
        k++;
    }
}

// Functie recursiva pentru Merge Sort
void mergeSort(int v[], int stanga, int dreapta) {
    if (stanga < dreapta) {
        int mijloc = stanga + (dreapta - stanga) / 2;

        // Sortăm prima si a doua jumatate recursiv
        mergeSort(v, stanga, mijloc);
        mergeSort(v, mijloc + 1, dreapta);

        // Imbinam sublistele sortate
        imbinare(v, stanga, mijloc, dreapta);
    }
}

int main() {
    int n;
    int v[100];  // Vectorul cu maxim 100 de elemente

    // Citim numarul de elemente
    cout << "Introduceti numarul de elemente (n): ";
    cin >> n;

    // Citim elementele vectorului v
    for (int i = 1; i <= n; i++) 
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    // Apelăm funcția de sortare Merge Sort
    mergeSort(v, 1, n);

    // Afișăm vectorul sortat
    cout << "Vectorul sortat este: ";
    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
