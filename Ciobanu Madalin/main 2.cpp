#include <iostream>
using namespace std;
int main() {
    int n, suma = 0;
    double media;
    cout << "Introduceti numarul de elemente citite de la tastatura: ";
    cin >> n;
for (int i = 0; i < n; ++i) {
        int num;
        cout << "Introduceti elementul " << (i + 1) << ": ";
        cin >> num;
        suma += num;
}
    media = static_cast<double>(suma) / n;
    cout << "Suma elementelor este: " << suma << endl;
    cout << "Media elementelor este: " << media << endl;
    return 0;

}

//Exercitiul nr. 2:
//Scrieti un program in C++, care determina media si suma unei liste de elemente citite de la tastatura
//Studend: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
