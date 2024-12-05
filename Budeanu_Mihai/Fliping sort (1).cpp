#include <iostream>
#include <vector>
#include <algorithm> 
 
using namespace std;
 
int main() {
    int n;
    cout << "Introdu numărul de elemente: ";
    cin >> n;
 
    vector<int> vector(n);
    cout << "Introdu elementele:\n";
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }
 
    sort(vector.begin(), vector.end(), greater<int>());
 
    cout << "Vectorul sortat descrescător este:\n";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
 
    return 0;
}
 