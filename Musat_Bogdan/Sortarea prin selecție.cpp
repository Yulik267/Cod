// Sortarea prin selecție.cpp : 

#include <iostream>
#include <vector>
using namespace std;

static void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
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

    selectionSort(arr);

    cout << "Numerele sortate sunt:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}