// Sortare prin insertie.cpp :

#include <iostream>
#include <vector>
using namespace std;

static void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Numarul de elemente trebuie sa fie pozitiv!" << endl;
        return 1; 
    }

    vector<int> arr(n);
    cout << "Introduceti " << n << " numere:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr);

    cout << "Numerele sortate sunt:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
