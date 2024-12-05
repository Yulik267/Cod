#include <iostream>
#include <vector>

using namespace std;

// Fct. pt fuziunea a doua subarray-uri
void merge(vector<int>& arr, int left, int mid, int right) {
    // Gasim dimensiunile celor doua subarray-uri
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Cream array-uri temporare
    vector<int> L(n1);
    vector<int> R(n2);

    // Copiem datele in array-urile temporare L[] si R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Indici pt elem initiale ale subarray-urilor
    int i = 0; // Index pt L
    int j = 0; // Index pt R
    int k = left; // Index pt array-ul principal

    // Fuziunea subarray-urilor inapoi in arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiem elem ramase, daca exista
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fct pt sortarea prin fuziune recursiva
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        // Gasim mijlocul
        int mid = left + (right - left) / 2;

        // Sortam recursiv fiecare jumatate
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Fuziunea jumatatilor sortate
        merge(arr, left, mid, right);
    }
}

// Fct pentru a afisa array-ul
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {8, 2, 4, 3, 9, 5, 1}; // Ex-lu

    cout << "Array-ul initial: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1); // Rulam sortarea

    cout << "Array-ul sortat: ";
    printArray(arr);

    return 0;
}
