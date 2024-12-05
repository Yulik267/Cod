#include <iostream>
using namespace std;
 
int main() {
    int n, temp;
 
   
    cout << "Introdu numarul de elemente din lista: ";
    cin >> n;
 
   
    int lista[n];
 
    cout << "Introdu elementele: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }
 
    // Implementarea metodei Bulelor 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (lista[j] > lista[j+1]) {
               
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
 
    
    cout << "Lista sortata: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
 
    return 0;
}