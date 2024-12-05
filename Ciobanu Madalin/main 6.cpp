#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    int numere[n];

    cout << "Introduceti " << n << " numere:\n";
    for(int i = 0; i < n; ++i) {
    cout << "Numarul " << i + 1 << ": ";
    cin >> numere[i];
    }

    sort(numere, numere + n);

    cout << "Numerele introduse sunt:\n";
    for(int i = 0; i < n; ++i) {
    cout << numere[i] << " ";
    }

    cout << std::endl;
    return 0;
}

//Student: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
//Disciplina: Proiectarea Algoritmilor
