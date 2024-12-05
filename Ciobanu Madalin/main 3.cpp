#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Introducetii coeficientii pentru a, b, c: ";
    cin >> a >> b >> c;
        double D = b * b - 4 * a * c;
    if (D >= 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Solutii: x1 = " << x1 << ", x2 = " << x2 << endl;
} else {
    cout << "Nu exista solutii reale." << endl;
    }
return 0;
}

//Exercitiul nr. 3
//Scrieti un program in C++, care rezolva ecuatia de gradul 2.
//Student: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
