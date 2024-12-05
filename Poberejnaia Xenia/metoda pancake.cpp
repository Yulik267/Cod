#include <iostream>
#include <vector>

using namespace std;

// Fct pt a inversa primele num elem ale vectorului
void flipItems(vector<int>& arr, int num) {
    int temp;
    int i = 0;

    // Inversam elem de la inceput pana la num - 1
    while (i < --num) {
        temp = arr[i];
        arr[i] = arr[num];
        arr[num] = temp;
        i++;
    }
}

//  Fct pt a sorta vectorul folosind metoda panckake
// Return numarul de operatii de inversare
int panCakeSort(vector<int>& arr) {
    int i, j, max, moves = 0;
    int len = arr.size();

    // Daca lungimea vectorului este m.mica de 2, returneaza 0, dc sortarea nu e necesara
    if (len < 2) return 0;

    // Ciclu principal: reducem dimensiunea partii nesortate a vectorului
    for (i = len; i > 1; i--) {
        max = 0;

        // Gasim indexul elem max din partea nesortata a vectorului
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }

        // Daca elem max e deja la locul sau, sarim peste aceasta iteratie
        if (max == i - 1) {
            continue;
        }

        // Inversam vectorul astfel incat elem max sa fie pe primul loc
        if (max > 0) {
            moves++;
            flipItems(arr, max + 1);
        }

        // Inversam vectorul a.i. elem max sa fie pe ultimul loc al partii nesortate
        moves++;
        flipItems(arr, i);
    }

    return moves;
}

int main() {
    vector<int> arr(5); // Vector cu 5 elem
    int moves;

    // Introducem elem vectorului
    cout << "Introduceti elementele vectorului:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element[" << i << "]: ";
        cin >> arr[i];
    }

    // Sortam vectorul folosind metoda pancake
    moves = panCakeSort(arr);

    // Afisam vectorul sortat
    cout << "Vectorul sortat: \n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNumarul total de miscari: " << moves << endl; // Afisam num de operatii de inversare

    return 0;
}
