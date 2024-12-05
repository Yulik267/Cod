#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int a = 0; a < n - 1; a++)
        for (int b = 0; b < n - a - 1; b++)
            if (arr[b] > arr[b + 1])
                swap(arr[b], arr[b + 1]);
}
int main() {
    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    int arr[100];
    cout << "Introduceti elementele pentru sortare: ";
    for (int a = 0; a < n; a++)
        cin >> arr[a];

    bubbleSort(arr, n);

    cout << "Elementele sortate sunt: ";
    for (int a = 0; a < n; a++)
        cout << arr[a] << " ";
    cout << endl;
    return 0;
}