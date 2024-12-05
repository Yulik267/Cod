#include <iostream>
using namespace std;
 
 
 void interschimbare(int *lista , int n) {
     int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (lista[i] > lista[j]) {
            
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
 }
 
int main() {
    int n;
    
   
    cout << "Introdu numarul de elemente din lista: ";
    cin >> n;
    
    int lista[n];
    
  
    cout << "Introdu elementele: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }
    
   interschimbare(lista, n);
    
  
    cout << "Lista sortata este: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    
    cout << endl;
    return 0;
}
 