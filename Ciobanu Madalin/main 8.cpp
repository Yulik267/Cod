#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void flip(vector<int>& arr, int end) {
    reverse(arr.begin(), arr.begin() + end + 1);
}

int findMaxIndex(const vector<int>& arr, int n) {
    return max_element(arr.begin(), arr.begin() + n) - arr.begin();
}

void pancakeSort(vector<int>& arr) {
    for (int size = arr.size(); size > 1; --size) {
        int maxIndex = findMaxIndex(arr, size);

        if (maxIndex != size - 1) {
            flip(arr, maxIndex);
            flip(arr, size - 1);
        }
    }
}
int main() {
    vector<int> arr = {3, 6, 2, 8, 5, 1};

    cout << "Array inițial: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    pancakeSort(arr);

    cout << "Array sortat: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

return 0;
}

//Nume: Ciobanu Madalin-Mihai
//Grupa: 1221
//Semigrupa: A
//Materie: Proiectarea Algoritmilor
