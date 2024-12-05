
#include <iostream>
#include <cmath>  
using namespace std;
 
int main() {
    double a, b, c, delta, x1, x2;
 
    
    cout << "Introdu coeficientul a: ";
    cin >> a;
    cout << "Introdu coeficientul b: ";
    cin >> b;
    cout << "Introdu coeficientul c: ";
    cin >> c;
 
    // Calcularea (delta)
    delta = b * b - 4 * a * c;
 

    if (delta > 0) {
    
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Rădăcinile sunt reale și distincte: x1 = " << x1 << " și x2 = " << x2 << endl;
    } else if (delta == 0) {
        // O singură soluție reală
        x1 = -b / (2 * a);
        cout << "Rădăcina este reală și dublă: x1 = x2 = " << x1 << endl;
    } else {
        // Soluții complexe
        double parteReala = -b / (2 * a);
        double parteImaginara = sqrt(-delta) / (2 * a);
        cout << "Rădăcinile sunt complexe și conjugate: " << endl;
        cout << "x1 = " << parteReala << " + " << parteImaginara << "i" << endl;
        cout << "x2 = " << parteReala << " - " << parteImaginara << "i" << endl;
    }
 
    return 0;
}